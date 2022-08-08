#include "rhomb.h"
#include "incorrect_param_exception.h"

Rhomb::Rhomb(int new_a, int new_A, int new_B) :
    Parallelogram(new_a, new_a, new_A, new_B)
{
    name = "Ромб";
    if (a != b || b != c || c != d || a != d) throw IncorrectParamException("Не все стороны равны");
}
