#include <iostream>

#include "./menu/MenuMain.hpp"
#include "./menu/MenuNavigation.hpp"
#include "./menu/MenuVariant.hpp"

int main() {

    MenuMain *mainMenu = new MenuMain("MAIN", "Exit");

    // Main Menu - Info Menu
    MenuVariant *mainMenuInfo = new MenuVariant("Info", "Back");
    // Info Menu - Show Info
    mainMenuInfo->pushAction([](){
        std::cout << "\nInfo Showed\n" << std::endl;
    });
    mainMenu->pushMenuItem(mainMenuInfo);
    
    mainMenu->run(std::cin);

    return 0;
}