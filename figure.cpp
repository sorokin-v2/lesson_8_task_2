#include "figure.h"
#include <iostream>
#include "incorrect_param_exception.h"

Figure::Figure()
{
    name = "Фигура";
    sides_count = 0;
    if (sides_count != 0) throw IncorrectParamException("Количество сторон != 0");
}

void Figure::print_info()
{
    std::cout << name << "Количество сторон: " << sides_count << std::endl;
}
