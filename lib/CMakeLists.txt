include(FetchContent)

# Adding libraries example

# # Adding MinimalSocket library
# set(BUILD_MinimalCppSocket_SAMPLES
#     OFF
#     CACHE BOOL "" FORCE)
# FetchContent_Declare(
#   min_sock
#   GIT_REPOSITORY https://github.com/andreacasalino/Minimal-Socket
#   GIT_TAG v.3.1
#   GIT_SHALLOW TRUE
#   SYSTEM)
# FetchContent_MakeAvailable(min_sock)

# # Adding ftxui library
# FetchContent_Declare(
#   ftxui
#   GIT_REPOSITORY https://github.com/ArthurSonzogni/ftxui
#   GIT_TAG v5.0.0
#   GIT_SHALLOW TRUE
#   SYSTEM)
# FetchContent_MakeAvailable(ftxui)

# # Adding sdl2 library
# set(SDL_SHARED_ENABLED_BY_DEFAULT OFF)
# set(SDL_TEST_ENABLED_BY_DEFAULT OFF)
# FetchContent_Declare(
#   sdl2
#   GIT_REPOSITORY https://github.com/libsdl-org/SDL.git
#   GIT_TAG release-2.30.7
#   GIT_SHALLOW TRUE
#   SYSTEM)
# FetchContent_MakeAvailable(sdl2)

# # Adding opengl library
# if(APPLE)
#   find_library(OpenGL_LIBRARY OpenGL)
# else()
#   find_package(OpenGL REQUIRED)
# endif()

# # Adding imgui library
# FetchContent_Declare(
#   imgui
#   GIT_REPOSITORY https://github.com/ocornut/imgui
#   GIT_TAG v1.91.2-docking
#   GIT_SHALLOW TRUE
#   SYSTEM)
# FetchContent_MakeAvailable(imgui)
# file(
#   GLOB
#   IMGUI_SOURCES
#   "${imgui_SOURCE_DIR}/*.cpp"
#   "${imgui_SOURCE_DIR}/backends/imgui_impl_sdl2.cpp"
#   "${imgui_SOURCE_DIR}/backends/imgui_impl_opengl3.cpp"
#   "${imgui_SOURCE_DIR}/misc/cpp/imgui_stdlib.cpp")
# add_library(imgui_lib STATIC ${IMGUI_SOURCES})
# target_include_directories(
#   imgui_lib SYSTEM
#   PUBLIC ${imgui_SOURCE_DIR} ${imgui_SOURCE_DIR}/backends
#          ${sdl2_SOURCE_DIR}/include ${imgui_SOURCE_DIR}/misc/cpp)
# if(WIN32)
#   target_link_libraries(imgui_lib PUBLIC SDL2::SDL2 opengl32)
# elseif(APPLE)
#   target_link_libraries(imgui_lib PUBLIC SDL2::SDL2 ${OpenGL_LIBRARY})
# else()
#   target_link_libraries(imgui_lib PUBLIC SDL2::SDL2 OpenGL::GL)
# endif()
