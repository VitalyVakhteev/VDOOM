#pragma once

#include "doomtype.hpp"

namespace Doom {
    enum MapLumpType {
        ML_LABEL = 0,    // Separator, name, ExMx or MAPxx
        ML_THINGS,       // Monsters, items, etc.
        ML_LINEDEFS,     // LineDefs, from editing
        ML_SIDEDEFS,     // SideDefs, from editing
        ML_VERTEXES,     // Vertices, edited and BSP splits generated
        ML_SEGS,         // LineSegs, from LineDefs split by BSP
        ML_SSECTORS,     // SubSectors, list of LineSegs
        ML_NODES,        // BSP nodes
        ML_SECTORS,      // Sectors, from editing
        ML_REJECT,       // LUT, sector-sector visibility
        ML_BLOCKMAP      // LUT, motion clipping, walls/grid element
    };

    struct mapvertex_t {
        int16_t x;
        int16_t y;
    };

    struct mapsidedef_t {
        int16_t textureoffset;
        int16_t rowoffset;
        char toptexture[8];
        char bottomtexture[8];
        char midtexture[8];
        int16_t sector; // Front sector, towards viewer
    };

    struct maplinedef_t {
        int16_t v1;
        int16_t v2;
        int16_t flags;
        int16_t special;
        int16_t tag;
        int16_t sidenum[2]; // sidenum[1] will be -1 if one sided
    };

    struct mapsector_t {
        int16_t floorheight;
        int16_t ceilingheight;
        char floorpic[8];
        char ceilingpic[8];
        int16_t lightlevel;
        int16_t special;
        int16_t tag;
    };

    struct mapsubsector_t {
        int16_t numsegs;
        int16_t firstseg; // Index of first one, segs are stored sequentially
    };

    struct mapseg_t {
        int16_t v1;
        int16_t v2;
        int16_t angle;
        int16_t linedef;
        int16_t side;
        int16_t offset;
    };

    struct mapnode_t {
        int16_t x;
        int16_t y;
        int16_t dx;
        int16_t dy;
        int16_t bbox[2][4]; // Bounding box for each child
        uint16_t children[2]; // If NF_SUBSECTOR its a subsector, else another subtree node
    };

    struct mapthing_t {
        int16_t x;
        int16_t y;
        int16_t angle;
        int16_t type;
        int16_t options;
    };
}