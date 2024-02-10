#pragma once

#include <vector>
#include <string>
#include <fstream>
#include <memory>

namespace Doom {
    class LumpCache;

    struct WadInfo {
        std::string identification;
        int numLumps;
        int infoTableOffset;
    };

    struct FileLump {
        int filePosition;
        int size;
        const char *name;
    };

    class LumpInfo {
    public:
        std::string name;
        int handle;
        int position;
        int size;

        LumpInfo(std::string name, int handle, int position, int size)
                : name(std::move(name)), handle(handle), position(position), size(size) {}
    };

    class WadFile {
    private:
        std::vector<LumpInfo> lumpInfos;
        std::vector<std::unique_ptr<char[]>> lumpCache;

    public:
        WadFile() = default;
        void initMultipleFiles(const std::vector<std::string>& filenames);
        void reload();

        int checkNumForName(const std::string& name) const;
        int getNumForName(const std::string& name) const;

        int lumpLength(int lump) const;
        void readLump(int lump, void* dest);

        void* cacheLumpNum(int lump, int tag);
        void* cacheLumpName(const std::string& name, int tag);

        int32_t swapInt32(int32_t val);
    };
}