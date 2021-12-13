cmake_minimum_required(VERSION 3.16)

project("C-Challenges" LANGUAGES C)

if (UNIX)
    set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
    set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
endif()

add_subdirectory("src/HelloWorld")
add_subdirectory("src/PlayWithCharacters")