#include "IMenu.hpp"

IMenu::IMenu(const string &menuName, MenuType type) {
    this->_menuName = menuName;
    this->_type = type;
}
IMenu::~IMenu() {}

string &IMenu::getMenuName() {
    return this->_menuName;
}

MenuType IMenu::getMenuType() {
    return this->_type;
}