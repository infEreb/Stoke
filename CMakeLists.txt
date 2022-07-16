cmake_minimum_required(VERSION 3.23.1)

project(Stoke)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

# GIT_SUBMODULES
find_package(Git QUIET)
if(GIT_FOUND AND EXISTS "${PROJECT_SOURCE_DIR}/.git")
    option(GIT_SUBMODULE "Check submodules during build" ON)
    if(GIT_SUBMODULE)
        message(STATUS "Submodule update")
        execute_process(COMMAND ${GIT_EXECUTABLE} submodule update --init --recursive
                        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
                        RESULT_VARIABLE GIT_SUBMOD_RESULT)
        if(NOT GIT_SUBMOD_RESULT EQUAL "0")
            message(FATAL_ERROR "git submodule update --init --recursive failed with ${GIT_SUBMOD_RESULT}, please checkout submodules")
        endif()
    endif()
endif()

# lists of modules
if(NOT EXISTS "${PROJECT_SOURCE_DIR}/extern/cpp-terminal/CMakeLists.txt"
    #NOT EXISTS "${PROJECT_SOURCE_DIR}/extern/tabulate/CMakeLists.txt"
)
    message(FATAL_ERROR "The submodules were not downloaded! GIT_SUBMODULE was turned off or failed. Please update submodules and try again.")
endif()

# add subdirs
add_subdirectory(extern/cpp-terminal)
add_subdirectory(extern/tabulate)

# end of GIT_SUBMODULES


add_subdirectory(src)

add_executable(${PROJECT_NAME} main.cpp)


install(TARGETS ${PROJECT_NAME} DESTINATION bin)
install(FILES main.cpp DESTINATION src)