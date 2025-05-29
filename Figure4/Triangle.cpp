#include "stdafx.h"
#include "Triangle.h"
#include "Figure.h"
#include <iostream>

Triangle::Triangle(double a, double b, double c, double A, double B, double C) : a(a), b(b), c(c), A(A), B(B), C(C)
	{
		name = "Треугольник";
	}
double Triangle::get_a() { return a; }
double Triangle::get_b() { return b; }
double Triangle::get_c() { return c; }
double Triangle::get_A() { return A; }
double Triangle::get_B() { return B; }
double Triangle::get_C() { return C; }
void Triangle::print_info()
	{
		std::cout << name << ": " << std::endl;
		std::cout << "Стороны: " << "a = " << get_a() << "  b = " << get_b() << "  c = " << get_c() << std::endl;
		std::cout << "Углы: " << "A = " << get_A() << "  B = " << get_B() << "  C = " << get_C() << std::endl;
		std::cout << std::endl;
	}