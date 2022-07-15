#ifndef IMENU_HPP
#define IMENU_HPP

#include <string>

#include "./MenuTypes.hpp"

using std::string;

class IMenu {
protected:
    string _menuName;
    MenuType _type;
public:
    IMenu(const string &menuName = "None", MenuType type = MenuType::NoneMenu);
    virtual ~IMenu();

    const string &getMenuName();
    MenuType getMenuType();
};

#endif