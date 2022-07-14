add_library(stoke_menu "")

target_link_libraries(stoke_menu
PUBLIC
    cpp-terminal
    tabulate
)

target_sources(stoke_menu 
PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/Menu.cpp
PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/Menu.hpp
)

target_include_directories(stoke_menu
PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
)