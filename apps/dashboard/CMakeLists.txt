cmake_minimum_required(VERSION 3.14)

add_executable(mgs_dashboard)

# find the app files
file(GLOB_RECURSE srcList main.c apps/*.c gfx/legato/generated/*.c)

filter_items(srcList ".*le_gen_harmony.*")

set(USE_CANVAS true CACHE BOOL "Using Canvas for mgs_dashboard Application")

target_sources(mgs_dashboard PRIVATE ${srcList})
target_sources(mgs_dashboard PRIVATE ${mgsSrcList})

if(USE_CANVAS)
	target_sources(mgs_dashboard PRIVATE ${gfxCanvasList})
endif()

include_directories(./)
include_directories(./apps)

install(TARGETS mgs_dashboard DESTINATION bin)
