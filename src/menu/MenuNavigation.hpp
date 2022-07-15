#ifndef MENU_NAVIGATION_HPP
#define MENU_NAVIGATION_HPP

#include "IMenuActions.hpp"

class MenuNavigation : public IMenu, public IMenuActions {
    // "Jump To" pointer
    IMenu *_nextMenu;

public:
    MenuNavigation(const string &menuName, IMenu *nextMenu);
    ~MenuNavigation();

    const IMenu* getNextMenu();
};

#endif