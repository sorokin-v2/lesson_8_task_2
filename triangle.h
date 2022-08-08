#pragma once
#include "figure.h"

class Triangle : public Figure {
public:
    Triangle(int new_a, int new_b, int new_c, int new_A, int new_B, int new_C);
    virtual void print_info() override;

protected:

    int a;
    int b;
    int c;
    int A;
    int B;
    int C;
};

