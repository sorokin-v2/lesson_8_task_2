#include "rectangle.h"
#include "incorrect_param_exception.h"

Rectangle::Rectangle(int new_a, int new_b) :
    Parallelogram(new_a, new_b, 90, 90)
{
    name = "�������������";
    if (a != c || b != d) throw IncorrectParamException("������� a �� ����� c ��� b �� ����� d");
    if (A != 90 || B != 90 || C != 90 || D != 90) throw IncorrectParamException("�� ��� ���� ����� 90");
}
