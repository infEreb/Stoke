#ifndef MENU_TYPES_HPP
#define MENU_TYPES_HPP

enum class MenuType {
    NoneMenu = 10,
    SubMenu = 11,
    ActionMenu = 12,
    MainMenu = 19
};

enum class MenuSignal {
    Exit = 101,
    Back = 102,
    Action = 103
};

#endif