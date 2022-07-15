#ifndef IMENU_ACTIONS_HPP
#define IMENU_ACTIONS_HPP

#include <vector>
#include <functional>

#include "IMenu.hpp"

using std::vector;
using std::function;

class IMenuActions {
protected:
    // without arguments void return functions
    vector<function<void()>> _actions; 

public:
    IMenuActions();
    ~IMenuActions();

    // pushes function into actions
    int pushAction(const function<void()> &lyambda);
    // pops last function from actions
    void popAction();

    // calls all of the functions in actions
    void call();

};

#endif