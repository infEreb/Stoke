cmake_minimum_required(VERSION 3.23.1)

project(Stoke)

add_executable(${PROJECT_NAME} main.cpp)

install(TARGETS ${PROJECT_NAME} DESTINATION bin)
install(FILES main.cpp DESTINATION src)