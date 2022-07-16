#ifndef MENU_NAVIGATION_HPP
#define MENU_NAVIGATION_HPP

#include "IMenuActions.hpp"

// Menu Navidation - class for swapping menus
class MenuNavigation : public IMenu {
    // "Jump To" pointer
    IMenu *_nextMenu;

public:
    MenuNavigation(const string &menuName, IMenu *nextMenu);
    ~MenuNavigation();

    const IMenu* getNextMenu();
};

#endif