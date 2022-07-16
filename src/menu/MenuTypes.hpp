#ifndef MENU_TYPES_HPP
#define MENU_TYPES_HPP

enum class MenuType {
    NoneMenu = 10,
    MenuAction = 11,
    MenuNavigation = 12,
    MenuVariant = 13,
    MenuMain = 19
};

enum class MenuSignal {
    Exit = 101,
    Back = 102,
    Action = 103
};

#endif