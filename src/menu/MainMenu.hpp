#ifndef MAIN_MENU_HPP
#define MAIN_MENU_HPP

#include <string>
#include <vector>

#include "IMenuContainer.hpp"
#include "IMenu.hpp"

using std::string;
using std::vector;

class MainMenu : public IMenu, public IMenuContainer {

public:
    MainMenu(string menuName, string tail);
    ~MainMenu();

    void run();
}

#endif