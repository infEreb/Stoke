#include <iostream>

#include "./menu/MainMenu.hpp"

int main() {

    MainMenu *mainMenu = new MainMenu("MAIN", "Exit");
    mainMenu->run(std::cin);

    return 0;
}