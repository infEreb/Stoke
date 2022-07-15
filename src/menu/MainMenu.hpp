#ifndef MAIN_MENU_HPP
#define MAIN_MENU_HPP

#include <string>
#include <vector>
#include <iostream>

#include "IMenuContainer.hpp"
#include "IMenu.hpp"

using std::string;
using std::vector;
using std::istream;

class MainMenu : public IMenu, public IMenuContainer {

public:
    MainMenu(const string &menuName, const string &tail);
    ~MainMenu();

    void run(istream &input);
};

#endif