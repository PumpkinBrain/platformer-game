cmake_minimum_required(VERSION 3.27)

set(NAME PlatformerGame)

project(${NAME} CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

enable_testing()

add_subdirectory("lib/googletest")

set(Headers
	"src/main/Vec2.h"
	"src/main/Components.h"
	"src/main/Entity.h"
	"src/main/EntityManager.h"
)

set(Sources
	"src/main/Vec2.cpp"
	"src/main/Entity.cpp"
	"src/main/EntityManager.cpp"
)

add_library(${NAME} STATIC ${Sources} ${Headers})

add_subdirectory("src/test")
