#include "../extern/cpp-terminal/cpp-terminal/base.hpp"
#include "../extern/cpp-terminal/cpp-terminal/input.hpp"
#include "../extern/cpp-terminal/cpp-terminal/window.hpp"
#include <iostream>

#include "./menu/MainMenu.hpp"

int main() {

    MainMenu *mainMenu = new MainMenu("MAIN", "Exit");
    mainMenu->run(std::cin);

    return 0;
}