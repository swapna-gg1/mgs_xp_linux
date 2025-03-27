cmake_minimum_required(VERSION 3.14)
find_package(PkgConfig REQUIRED)
pkg_check_modules(GSTREAMER REQUIRED gstreamer-1.0 gstreamer-app-1.0 gobject-2.0 glib-2.0)
pkg_check_modules(GPIOD REQUIRED libgpiod)
add_executable(mgs_smartHome)

# find the app files
file(GLOB_RECURSE srcList main.c  apps/*.c gfx/legato/generated/*.c)

filter_items(srcList ".*le_gen_harmony.*")

target_sources(mgs_smartHome PRIVATE ${srcList})
target_sources(mgs_smartHome PRIVATE ${mgsSrcList})

include_directories(./)
include_directories(./apps)
include_directories(${GSTREAMER_INCLUDE_DIRS})


#target_link_libraries(mgs_smartHome PRIVATE ${GPIOD_LIBRARIES})
target_include_directories(mgs_smartHome PRIVATE ${GPIOD_INCLUDE_DIRS})

target_link_libraries(mgs_smartHome ${GSTREAMER_LIBRARIES} ${GSTREAMER_APP_LIBRARIES} ${GLIB_LIBRARIES} ${GPIOD_LIBRARIES})
target_compile_options(mgs_smartHome PRIVATE ${GSTREAMER_CFLAGS_OTHER})
install(TARGETS mgs_smartHome DESTINATION bin)
