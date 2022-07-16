#include "MenuVariant.hpp"

MenuVariant::MenuVariant(const string &menuName, const string &tail) : IMenu(menuName, MenuType::MenuVariant), IMenuContainer(tail) {}
MenuVariant::~MenuVariant() {}

