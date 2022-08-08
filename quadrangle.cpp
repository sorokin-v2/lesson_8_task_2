#include "quadrangle.h"
#include <iostream>
#include "incorrect_param_exception.h"

Quadrangle::Quadrangle(int new_a, int new_b, int new_c, int new_d, int new_A, int new_B, int new_C, int new_D) :
        a{ new_a }, b{ new_b }, c{ new_c }, d{ new_d }, A{ new_A }, B{ new_B }, C{ new_C }, D{ new_D }
{
    name = "��������������";
    sides_count = 4;
    if(sides_count != 4)throw IncorrectParamException("���������� ������ �� ����� 4");
    if ((A + B + C + D) == 360)throw IncorrectParamException("����� ������ �� ����� 360");
}

void Quadrangle::print_info()
{
    std::cout << name << "(c������: " << a << ", " << b << ", " << c << ", " << d << "; ���� " << A << ", " << B << ", " << C << ", " << D << ")";
}
