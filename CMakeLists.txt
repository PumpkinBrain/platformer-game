cmake_minimum_required(VERSION 3.27)

set(NAME PlatformerGame)

project(${NAME} CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
option(BUILD_SHARED_LIBS "Build shared libraries" OFF)

enable_testing()

add_subdirectory("lib/googletest")

set(Headers
	"src/main/Components.h"
	"src/main/Entity.h"
	"src/main/EntityManager.h"
	"src/main/Game.h"
	"src/main/GameScene.h"
	"src/main/SceneInterface.h"
	"src/main/SceneManager.h"
	"src/main/Vec2.h"
)

set(Sources
	"src/main/Entity.cpp"
	"src/main/EntityManager.cpp"
	"src/main/Game.cpp"
	"src/main/GameScene.cpp"
	"src/main/SceneManager.cpp"
	"src/main/Vec2.cpp"
	"src/main/main.cpp"
)
add_library(${NAME}lib STATIC ${Sources} ${Headers})
target_link_libraries(${NAME}lib PRIVATE sfml-graphics)
add_subdirectory("src/test")

include(FetchContent)
FetchContent_Declare(SFML
	GIT_REPOSITORY https://github.com/SFML/SFML.git
	GIT_TAG 2.6.x)
FetchContent_MakeAvailable(SFML)

add_executable(${NAME} ${Sources} ${Headers})
target_link_libraries(${NAME} PRIVATE sfml-graphics)
target_compile_features(${NAME} PRIVATE cxx_std_17)
