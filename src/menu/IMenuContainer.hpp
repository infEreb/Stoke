#ifndef IMENU_CONTAINER_HPP
#define IMENU_CONTAINER_HPP

#include <vector>
#include <string>

#include "MenuTypes.hpp"

using std::vector;
using std::string;

class IMenu;

// implementation of menu like container 
// for menu items
class IMenuContainer {
protected:
    std::vector<IMenu*> _items;
    // tail is menu item like Back or Exit that should be at the end of item list
    string _tail;
public:
    // 1st (tail) - name of the last item (Back or Exit). Empty string if hasnt one
    IMenuContainer(const string &tail = "");
    virtual ~IMenuContainer();
    // pushes menu item to the end of list
    bool pushMenuItem(IMenu *item);

    const vector<IMenu*>& getItems();

    bool hasTail();
    const string &getTail();

    size_t getItemsCount();

    const string &toString();
};

#endif