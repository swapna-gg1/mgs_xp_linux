cmake_minimum_required(VERSION 3.14)

add_executable(mgs4linux_kiosk)

# find the app files
file(GLOB_RECURSE srcList main.c  apps/*.c gfx/legato/generated/*.c)

filter_items(srcList ".*le_gen_harmony.*")
filter_items(sharedSrcList ".*gfx_canvas.*")

target_sources(mgs4linux_kiosk PRIVATE ${srcList})
target_sources(mgs4linux_kiosk PRIVATE ${mgsSrcList})

include_directories(./)
include_directories(./apps)

install(TARGETS mgs4linux_kiosk DESTINATION bin)
