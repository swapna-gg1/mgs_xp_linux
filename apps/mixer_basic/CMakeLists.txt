cmake_minimum_required(VERSION 3.14)

add_executable(mgs_mixer_basic)

# find the app files
file(GLOB_RECURSE srcList main.c apps/*.c gfx/legato/generated/*.c)

#filter_items(linuxSrcList ".*simulator.*")
filter_items(srcList ".*le_gen_harmony.*")
filter_items(mgsSrcList ".*gfx_canvas.*")

target_sources(mgs_mixer_basic PRIVATE ${srcList})
target_sources(mgs_mixer_basic PRIVATE ${mgsSrcList})

include_directories(./)
include_directories(./apps)

install(TARGETS mgs_mixer_basic DESTINATION bin)
