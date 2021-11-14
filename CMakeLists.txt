cmake_minimum_required(VERSION 3.4.1)

project(TNGPrivateCPPLesson)

set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(
	SOURCES
	src/main.cpp
)

set(
	HEADERS
)

add_subdirectory(ext/sfml)

add_executable(
	lesson
	${SOURCES}
	${HEADERS}
)

target_include_directories(lesson PRIVATE ext/sfml/include)
target_link_libraries(lesson sfml-system sfml-window sfml-graphics)
