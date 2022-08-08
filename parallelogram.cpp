#include "parallelogram.h"
#include "incorrect_param_exception.h"

Parallelogram::Parallelogram(int new_a, int new_b, int new_A, int new_B) :
    Quadrangle(new_a, new_b, new_a, new_b, new_A, new_B, new_A, new_B)
{
    name = "Параллелограмм";
    if (a != c || b != d)throw IncorrectParamException("Сторона a не равна c или b не равна d");
    if (A != C || B != D)throw IncorrectParamException("Угол A не равен C или B не равен D");
}

