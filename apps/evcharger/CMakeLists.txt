cmake_minimum_required(VERSION 3.14)

add_executable(mgs_evcharger)

# find the app files
file(GLOB_RECURSE srcList main.c  apps/*.c gfx/legato/generated/*.c)

filter_items(srcList ".*le_gen_harmony.*")

target_sources(mgs_evcharger PRIVATE ${srcList})
target_sources(mgs_evcharger PRIVATE ${mgsSrcList})

include_directories(./)
include_directories(./apps)

install(TARGETS mgs_evcharger DESTINATION bin)
