cmake_minimum_require(VERSION 3.27)

set(NAME PlatformerGame)

project(${NAME} C)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

enable_testing()

add_subdirectory("lib/googletest")

set(Headers

)

set(Sources

)

add_librar(${NAME} STATIC ${Sources} ${Headers})

add_subdirectory("src/test")
