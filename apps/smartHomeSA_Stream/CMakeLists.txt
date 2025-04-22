cmake_minimum_required(VERSION 3.14)
find_package(PkgConfig REQUIRED)
pkg_check_modules(GSTREAMER REQUIRED gstreamer-1.0 gstreamer-app-1.0 gobject-2.0 glib-2.0)
#pkg_check_modules(GPIOD REQUIRED libgpiod)
pkg_check_modules(LIBINPUT REQUIRED libinput)

add_executable(mgs_smartHomeSA_Stream)

# find the app files
file(GLOB_RECURSE srcList main.c  apps/*.c gfx/legato/generated/*.c)

filter_items(srcList ".*le_gen_harmony.*")

target_sources(mgs_smartHomeSA_Stream PRIVATE ${srcList})
target_sources(mgs_smartHomeSA_Stream PRIVATE ${mgsSrcList})

include_directories(./)
include_directories(./apps)
include_directories(${GSTREAMER_INCLUDE_DIRS})



#target_include_directories(mgs_smartHomeSA_Stream PRIVATE ${GPIOD_INCLUDE_DIRS})
target_include_directories(mgs_smartHomeSA_Stream PRIVATE ${LIBINPUT_INCLUDE_DIRS})

#target_link_libraries(mgs_smartHomeSA_Stream ${GSTREAMER_LIBRARIES} ${GSTREAMER_APP_LIBRARIES} ${GLIB_LIBRARIES} ${GPIOD_LIBRARIES})
target_link_libraries(mgs_smartHomeSA_Stream ${GSTREAMER_LIBRARIES} ${GSTREAMER_APP_LIBRARIES} ${GLIB_LIBRARIES} ${LIBINPUT_LIBRARIES})

target_compile_options(mgs_smartHomeSA_Stream PRIVATE ${GSTREAMER_CFLAGS_OTHER})
install(TARGETS mgs_smartHomeSA_Stream DESTINATION bin)
