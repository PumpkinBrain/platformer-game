cmake_minimum_required(VERSION 3.27)

set(NAME PlatformerGameTests)

set(Sources

)

set(Headers

)

add_executable(${NAME} ${Sources})
target_link_libraries(${NAME} PUBLIC
	gtest_main
	PlatformerGame
)

add_test(
	NAME ${NAME}
	COMMAND ${NAME}
)
