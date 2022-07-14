add_executable(stoke_app main.cpp)

add_subdirectory(menu)

target_link_libraries(stoke_app
PRIVATE
    stoke_menu
)