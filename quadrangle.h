#pragma once
#include "figure.h"

class Quadrangle : public Figure {
public:

    Quadrangle(int new_a, int new_b, int new_c, int new_d, int new_A, int new_B, int new_C, int new_D);
    virtual void print_info() override;

protected:

    int a;
    int b;
    int c;
    int d;
    int A;
    int B;
    int C;
    int D;
};

