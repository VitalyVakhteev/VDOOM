cmake_minimum_required(VERSION 3.27)
project(VDOOM)

set(CMAKE_CXX_STANDARD 17)

add_executable(VDOOM
        d_items.cpp
        info.h
        d_english.h
        d_think.h
        dstrings.cpp
        dstrings.h
        w_wad.cpp
        w_wad.h
)

