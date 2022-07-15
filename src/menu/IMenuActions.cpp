#include "IMenuActions.hpp"

#include "MenuTypes.hpp"

IMenuActions::IMenuActions() {}
IMenuActions::~IMenuActions() {}

int IMenuActions::pushAction(const function<void()> &lyambda) {
    try {
        this->_actions.push_back(lyambda);
        return 0;
    } catch(...) {
        return 1;
    }
}
void IMenuActions::popAction() {
    this->_actions.pop_back();
}

void IMenuActions::call() {
    for(auto func: this->_actions) {
        func();
    }
}