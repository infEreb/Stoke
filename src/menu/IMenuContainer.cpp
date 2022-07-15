#include "IMenuContainer.hpp"

#include "IMenu.hpp"
#include "../../extern/tabulate/include/tabulate/table.hpp"

using namespace tabulate;
using Row_t = Table::Row_t;

IMenuContainer::IMenuContainer(const string &tail) {
    this->_items = {};
    this->_tail = tail;
}

IMenuContainer::~IMenuContainer() {
    for(IMenu *item: this->_items) {
        delete item;
    }
}

bool IMenuContainer::pushMenuItem(IMenu *item) {
    if(!hasTail() || getItemsCount() == 0) {
        try {
            this->_items.push_back(item);
            return 0;
        } catch(...) {
            return 1;
        }
    }

    IMenu *temp = _items[getItemsCount() - 1];
    _items[getItemsCount() - 1] = item;
    _items.push_back(temp);

    return 0;
}

const vector<IMenu*>& IMenuContainer::getItems() {
    return _items;
}

const string &IMenuContainer::getTail() {
    return this->_tail;
}
bool IMenuContainer::hasTail() {
    return this->_tail != "";
}

size_t IMenuContainer::getItemsCount() {
    return this->_items.size();
}

const string& IMenuContainer::toString() {
    Table menu;
    int i = 0;
    for(auto item: this->_items) {
        menu.add_row(Row_t{std::to_string(i+1) + "." + item->getMenuName()});
        menu.column(i).format().font_align(FontAlign::center);
    }

    return menu.str();
}