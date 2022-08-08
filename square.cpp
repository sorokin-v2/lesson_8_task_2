#include"square.h"
#include "incorrect_param_exception.h"

Square::Square(int new_a) :
    Rectangle(new_a, new_a)
{
    name = "Квадрат";
    if(A != 90 || B != 90 || C != 90 || D != 90) throw IncorrectParamException("Не все углы равны 90");
    if (a != b || b != c || c != d || a != d) throw IncorrectParamException("Не все стороны равны");
}
