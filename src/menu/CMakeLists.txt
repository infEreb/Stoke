add_library(stoke_menu "")

target_link_libraries(stoke_menu
PUBLIC
    cpp-terminal
    tabulate
)

target_sources(stoke_menu 
PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/IMenu.cpp
    ${CMAKE_CURRENT_LIST_DIR}/IMenuContainer.cpp
    ${CMAKE_CURRENT_LIST_DIR}/MenuMain.cpp
    ${CMAKE_CURRENT_LIST_DIR}/IMenuActions.cpp
    ${CMAKE_CURRENT_LIST_DIR}/MenuNavigation.cpp
    ${CMAKE_CURRENT_LIST_DIR}/MenuAction.cpp
    ${CMAKE_CURRENT_LIST_DIR}/MenuVariant.cpp
PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/IMenu.hpp
    ${CMAKE_CURRENT_LIST_DIR}/IMenuContainer.hpp
    ${CMAKE_CURRENT_LIST_DIR}/MenuMain.hpp
    ${CMAKE_CURRENT_LIST_DIR}/IMenuActions.hpp
    ${CMAKE_CURRENT_LIST_DIR}/MenuNavigation.hpp
    ${CMAKE_CURRENT_LIST_DIR}/MenuAction.hpp
    ${CMAKE_CURRENT_LIST_DIR}/MenuVariant.hpp
    ${CMAKE_CURRENT_LIST_DIR}/MenuTypes.hpp
)

target_include_directories(stoke_menu
PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
)