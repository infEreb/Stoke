#ifndef MENU_VARIANT_HPP
#define MENU_VARIANT_HPP

#include "IMenu.hpp"
#include "IMenuActions.hpp"
#include "IMenuContainer.hpp"

// Menu Variant - class of Menu that will be contains elements and some actions
class MenuVariant : public IMenu, public IMenuActions, public IMenuContainer {
public:
    MenuVariant(const string &menuName, const string &tail);
    ~MenuVariant();
};

#endif