#include "MenuMain.hpp"
#include "MenuNavigation.hpp"
#include "../../extern/tabulate/include/tabulate/table.hpp"

using namespace tabulate;
using Row_t = Table::Row_t;

MenuMain::MenuMain(const string &menuName, const string &tail) : IMenu(menuName, MenuType::MenuMain),  IMenuContainer(tail) {
    // add exit menu item
    this->pushMenuItem(new MenuNavigation(tail, nullptr));
}

MenuMain::~MenuMain() {}

void MenuMain::run(istream &input) {
    std::cout << this->toString() << std::endl;
    // string in;
    // input >> in;
    
    // while(in != std::to_string(this->_items.size())) {

    // }
}