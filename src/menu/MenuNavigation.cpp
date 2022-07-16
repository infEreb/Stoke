#include "MenuNavigation.hpp"

MenuNavigation::MenuNavigation(const string &menuName, IMenu *nextMenu) : IMenu(menuName, MenuType::MenuNavigation) {
    this->_nextMenu = nextMenu;
}
MenuNavigation::~MenuNavigation() {
    // dont need to delete nextMenu
}

const IMenu *MenuNavigation::getNextMenu() {
    return this->_nextMenu;
}