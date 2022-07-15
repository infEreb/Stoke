#include "IMenuContainer.hpp"

#include "IMenu.hpp"

IMenuContainer::IMenuContainer(string tail = "") {
    this->_items = {};
    this->_tail = tail;
    _itemsCount = 0;
}

IMenuContainer::~IMenuContainer() {
    for(IMenu *item: this->_items) {
        delete item;
    }
}

bool IMenuContainer::pushMenuItem(IMenu *item) {
    if(!hasTail() || _itemsCount == 0) {
        try {
            this->_items.push_back(item);
            return 0;
        } catch(...) {
            return 1;
        }
    }

    IMenu *temp = _items[_itemsCount - 1];
    _items[_itemsCount - 1] = item;
    _items.push_back(temp);

    _itemsCount++;
    return 0;
}

const vector<IMenu*>& IMenuContainer::getItems() {
    return _items;
}

bool IMenuContainer::hasTail() {
    return this->_tail != "";
}

size_t IMenuContainer::getItemsCount() {
    return this->_itemsCount;
}