#include "figure.h"
#include <iostream>
#include "incorrect_param_exception.h"

Figure::Figure()
{
    name = "������";
    sides_count = 0;
    if (sides_count != 0) throw IncorrectParamException("���������� ������ != 0");
}

void Figure::print_info()
{
    std::cout << name << "���������� ������: " << sides_count << std::endl;
}
