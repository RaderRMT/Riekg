#pragma once

#include <stack>
class State {
public:
    virtual bool run(std::stack<State*>* states) = 0;
};
