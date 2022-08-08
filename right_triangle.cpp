#include "right_triangle.h"
#include "incorrect_param_exception.h"

Right_triangle::Right_triangle(int new_a, int new_b, int new_c, int new_A, int new_B) :
        Triangle(new_a, new_b, new_c, new_A, new_B, 90)
    {
        name = "������������� �����������";
        if((A + B) != 90) throw IncorrectParamException("����� ����� A � B �� ����� 90");
        if (C != 90) throw IncorrectParamException("���� C �� ����� 90");
    }
