cmake_minimum_required(VERSION 3.27)

set(NAME PlatformerGameTests)

set(Sources
	Vec2Test.cpp
	EntityManagerTest.cpp
)

add_executable(${NAME} ${Sources})
target_link_libraries(${NAME} PUBLIC
	gtest_main
	PlatformerGamelib
)

add_test(
	NAME ${NAME}
	COMMAND ${NAME}
)
