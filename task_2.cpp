#include <iostream>
#include <string>
#include "figure.h"
#include "triangle.h"
#include "right_triangle.h"
#include "isosceles_triangle.h"
#include "equilateral_triangle.h"
#include "quadrangle.h"
#include "parallelogram.h"
#include "rectangle.h"
#include "rhomb.h"
#include"square.h"
#include "incorrect_param_exception.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    try
    {
        Figure figure;
        figure.print_info();

        Triangle triangle(10, 20, 30, 50, 60, 70);
        triangle.print_info();
        Right_triangle right_triangle(10, 20, 30, 50, 60);
        right_triangle.print_info();
        Isosceles_triangle isosceles_triangle(10, 20, 50, 60);
        isosceles_triangle.print_info();
        Equilateral_triangle equilateral_triangle(30);
        equilateral_triangle.print_info();

        Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
        quadrangle.print_info();
        Parallelogram parallelogram(20, 30, 30, 40);
        parallelogram.print_info();
        Rectangle rectangle(10, 20);
        rectangle.print_info();
        Rhomb rhomb(30, 30, 40);
        rhomb.print_info();
        Square square(20);
        square.print_info();
    }
    catch (IncorrectParamException& e)
    {
        std::cout << " не был создан. Причина: " << e.what();
    }
}
