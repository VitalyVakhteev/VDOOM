#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>
#include <string>
#include <algorithm>
#include <stdexcept>
#include "w_wad.h"

namespace Doom {

    // Helper function to swap bytes
    int32_t WadFile::swapInt32(int32_t val) {
        // FIXME Implement byte swapping for endianness
        return val; // Placeholder
    }

    void WadFile::initMultipleFiles(const std::vector<std::string>& filenames) {
        lumpInfos.clear();
        lumpCache.clear();
        for (const auto &filename: filenames) {
            std::ifstream file(filename, std::ios::binary);
            if (!file.is_open()) {
                std::cerr << "Could not open file: " << filename << std::endl;
                continue;
            }

            char identification[5] = {};
            file.read(identification, 4);
            if (std::strncmp(identification, "IWAD", 4) != 0 && std::strncmp(identification, "PWAD", 4) != 0) {
                std::cerr << "File is not a valid WAD file: " << filename << std::endl;
                continue;
            }

            WadInfo wadHeader{};
            file.seekg(0, std::ios::beg); // Go back to start to read the whole header
            file.read(reinterpret_cast<char *>(&wadHeader), sizeof(WadInfo));
            wadHeader.numLumps = swapInt32(wadHeader.numLumps);
            wadHeader.infoTableOffset = swapInt32(wadHeader.infoTableOffset);

            file.seekg(wadHeader.infoTableOffset, std::ios::beg);
            for (int i = 0; i < wadHeader.numLumps; ++i) {
                FileLump lumpEntry;
                file.read(reinterpret_cast<char *>(&lumpEntry), sizeof(FileLump));
                lumpEntry.filePosition = swapInt32(lumpEntry.filePosition);
                lumpEntry.size = swapInt32(lumpEntry.size);

                // Copy lump name and ensure it's null-terminated
                char lumpName[9] = {};
                std::strncpy(lumpName, lumpEntry.name, 8);

                LumpInfo lumpInfo(lumpName, -1, lumpEntry.filePosition, lumpEntry.size);
                lumpInfos.push_back(lumpInfo);
            }
        }

        if (lumpInfos.empty()) {
            throw std::runtime_error("No WAD files could be loaded.");
        }

        lumpCache.resize(lumpInfos.size(), nullptr);
    }

    void WadFile::reload() {
        // Implementation to reload lumps from file, if necessary
    }

    int WadFile::checkNumForName(const std::string& name) const {
        auto it = std::find_if(lumpInfos.begin(), lumpInfos.end(),
                               [&name](const LumpInfo& lump) {
                                   return lump.name == name;
                               });

        if (it != lumpInfos.end()) {
            return std::distance(lumpInfos.begin(), it);
        }
        return -1;
    }

    int WadFile::getNumForName(const std::string& name) const {
        int index = checkNumForName(name);
        if (index == -1) {
            throw std::runtime_error("Lump named " + name + " not found");
        }
        return index;
    }

    int WadFile::lumpLength(int lump) const {
        if (lump < 0 || static_cast<size_t>(lump) >= lumpInfos.size()) {
            throw std::out_of_range("Lump index out of range");
        }
        return lumpInfos[lump].size;
    }

    void WadFile::readLump(int lump, void* dest) {
        // Implementation to read a lump into dest
    }

    void* WadFile::cacheLumpNum(int lump, int tag) {
        // Implementation for caching a lump by number
        return nullptr; // Example placeholder
    }

    void* WadFile::cacheLumpName(const std::string& name, int tag) {
        // Implementation for caching a lump by name
        return nullptr; // Example placeholder
    }

}