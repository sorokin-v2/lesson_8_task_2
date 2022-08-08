#include "rectangle.h"
#include "incorrect_param_exception.h"

Rectangle::Rectangle(int new_a, int new_b) :
    Parallelogram(new_a, new_b, 90, 90)
{
    name = "Прямоугольник";
    if (a != c || b != d) throw IncorrectParamException("Сторона a не равна c или b не равна d");
    if (A != 90 || B != 90 || C != 90 || D != 90) throw IncorrectParamException("Не все углы равны 90");
}
