#include "isosceles_triangle.h"
#include "triangle.h"
#include "incorrect_param_exception.h"

Isosceles_triangle::Isosceles_triangle(int new_a, int new_b, int new_A, int new_B) :
        Triangle(new_a, new_b, new_a, new_A, new_B, new_A)
    {
        name = "�������������� �����������";
        if(a != c ) throw IncorrectParamException("������� a �� ����� ������� c");
        if (A != C) throw IncorrectParamException("���� � �� ����� ���� �");
    }

