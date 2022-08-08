#include "triangle.h"
#include <iostream>
#include "incorrect_param_exception.h"

Triangle::Triangle(int new_a, int new_b, int new_c, int new_A, int new_B, int new_C) :
        a{ new_a }, b{ new_b }, c{ new_c }, A{ new_A }, B{ new_B }, C{ new_C }
    {
        name = "�����������";
        sides_count = 3;
        if ((A + B + C) != 180) throw IncorrectParamException("����� ����� �� ����� 180");
        if(sides_count != 3) throw IncorrectParamException("���������� ������ �� ����� 3");
    }
void Triangle::print_info()
    {
        std::cout << name << " (c������: " << a << ", " << b << ", " << c << "; ���� " << A << ", " << B << ", " << C << ")";
    }
