#ifndef MENU_MAIN_HPP
#define MENU_MAIN_HPP

#include <string>
#include <vector>
#include <iostream>

#include "IMenuContainer.hpp"
#include "IMenu.hpp"

using std::string;
using std::vector;
using std::istream;

// Main Menu - class that just contains children elements
class MenuMain : public IMenu, public IMenuContainer {
public:
    MenuMain(const string &menuName, const string &tail);
    ~MenuMain();

    void run(istream &input);
};

#endif