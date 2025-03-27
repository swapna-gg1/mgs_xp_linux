cmake_minimum_required(VERSION 3.14)

add_executable(mgs_quickstart_canvas)

# find the app files
file(GLOB_RECURSE srcList main.c  apps/*.c gfx/legato/generated/*.c)

filter_items(srcList ".*le_gen_harmony.*")

set(USE_CANVAS true CACHE BOOL "Using Canvas for mgs_quickstart_canvas Application")

target_sources(mgs_quickstart_canvas PRIVATE ${srcList})
target_sources(mgs_quickstart_canvas PRIVATE ${mgsSrcList})

if(USE_CANVAS)
	target_sources(mgs_quickstart_canvas PRIVATE ${gfxCanvasList})
endif()

message(${gfxCanvasList})

include_directories(./)
include_directories(./apps)

install(TARGETS mgs_quickstart_canvas DESTINATION bin)
