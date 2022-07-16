#ifndef MENU_ACTION_HPP
#define MENU_ACTION_HPP

#include "IMenuActions.hpp"

// Menu Action - Menu class that will be contains some actions
class MenuAction : public IMenu, public IMenuActions {
public:
    MenuAction(const string &menuName);
    ~MenuAction();
};

#endif