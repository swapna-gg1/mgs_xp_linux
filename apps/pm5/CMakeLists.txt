cmake_minimum_required(VERSION 3.14)

# Set the C++ standard (optional)
set(CMAKE_CXX_STANDARD 14)

add_executable(mgs_pm5)

# find the app files
file(GLOB_RECURSE srcList main.c cpp/*.cpp apps/*.c gfx/legato/generated/*.c)

filter_items(srcList ".*le_gen_harmony.*")

target_sources(mgs_pm5 PRIVATE ${srcList})
target_sources(mgs_pm5 PRIVATE ${mgsSrcList})

include_directories(./)
include_directories(./apps)
include_directories(./cpp)

install(TARGETS mgs_pm5 DESTINATION bin)
