#include "MainMenu.hpp"

MainMenu::MainMenu(string menuName, string tail) : IMenu(menuName, MenuType::MainMenu),  IMenuContainer(tail) {
    this->pushMenuItem()
}