cmake_minimum_required(VERSION 3.11.0)
project(EzHero)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
#set(CMAKE_BINARY_DIR bin)
#set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
#set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

MESSAGE( STATUS "variable is: " ${CMAKE_BINARY_DIR} )
MESSAGE( STATUS "variable is: " ${EXECUTABLE_OUTPUT_PATH} )
MESSAGE( STATUS "variable is: " ${Open} )

#Add header files to the project
include_directories(include)

#Add source files to the project
file(GLOB SOURCES "src/*.cpp")



add_executable(EzHero ${SOURCES})
