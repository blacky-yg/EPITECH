cmake_minimum_required(VERSION 3.17)
project(IndieStudio CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
if (NOT WIN32)
    set(CMAKE_CXX_FLAGS "-W -Wextra")
endif()

# Setting parameters for raylib
set(BUILD_EXAMPLES OFF CACHE BOOL "" FORCE) # don't build the supplied examples
set(BUILD_GAMES    OFF CACHE BOOL "" FORCE) # or games

add_subdirectory(libs/raylib)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/libs/Modules/")

include_directories(
    "include/"
    "include/Interfaces/"
    "include/Manager/"
    "include/Object/"
    "include/Scene/"
)

file(
    GLOB SRC
    "sources/*.cpp"
    "sources/Manager/*.cpp"
    "sources/Object/*.cpp"
    "sources/Scene/*.cpp"
    )

add_executable(bomberman ${SRC})
target_compile_options(bomberman PRIVATE -g3)
target_link_libraries(bomberman PRIVATE raylib)
target_compile_definitions(bomberman PUBLIC ASSETS_PATH="${CMAKE_CURRENT_SOURCE_DIR}/resources/") # Set the asset path macro to the absolute path on the dev machine