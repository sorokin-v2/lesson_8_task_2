#pragma once
#include <string>

class Figure {
public:
    Figure();
    virtual void print_info();
protected:
    std::string name;
    int sides_count;
};

