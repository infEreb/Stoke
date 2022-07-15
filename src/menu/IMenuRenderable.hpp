#ifndef IMENU_RENDERABLE_HPP
#define IMENU_RENDERABLE_HPP

#include <string>

using std::string;

// gets a special view
class IMenuRenderable {
public:
    virtual string render() = 0;
};

#endif