#include "equilateral_triangle.h"
#include "incorrect_param_exception.h"

Equilateral_triangle::Equilateral_triangle(int new_a) :
        Triangle(new_a, new_a, new_a, 60, 60, 60)
    {
        name = "�������������� �����������";
        if(A != 60 || B!= 60 || C!= 60) throw IncorrectParamException("�� ��� ���� ����� 60");
        if (a != b || b != c || a != c) throw IncorrectParamException("������� �� �����");
    }
