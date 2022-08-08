#include "right_triangle.h"
#include "incorrect_param_exception.h"

Right_triangle::Right_triangle(int new_a, int new_b, int new_c, int new_A, int new_B) :
        Triangle(new_a, new_b, new_c, new_A, new_B, 90)
    {
        name = "Прямоугольный треугольник";
        if((A + B) != 90) throw IncorrectParamException("Сумма углов A и B не равна 90");
        if (C != 90) throw IncorrectParamException("Угол C не равен 90");
    }
