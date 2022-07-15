#ifndef IMENU_HPP
#define IMENU_HPP

#include <string>

#include "./MenuTypes.hpp"

using std::string;

class IMenu {
    string _menuName;
    MenuType _type;
public:
    IMenu(const string &menuName = "None", MenuType type = MenuType::NoneMenu);
    virtual ~IMenu();

    string &getMenuName();
    MenuType getMenuType();
};

#endif