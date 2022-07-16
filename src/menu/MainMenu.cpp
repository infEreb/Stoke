#include "MainMenu.hpp"
#include "MenuNavigation.hpp"
#include "../../extern/tabulate/table.hpp"

using namespace tabulate;
using Row_t = Table::Row_t;

MainMenu::MainMenu(const string &menuName, const string &tail) : IMenu(menuName, MenuType::MainMenu),  IMenuContainer(tail) {
    // add exit menu item
    this->pushMenuItem(new MenuNavigation(tail, nullptr));
}

MainMenu::~MainMenu() {}

void MainMenu::run(istream &input) {
    std::cout << this->toString() << std::endl;
    // string in;
    // input >> in;
    
    // while(in != std::to_string(this->_items.size())) {

    // }
}