#include "stdafx.h"
#include "Quadrangle .h"
#include "Figure.h"
#include <iostream>

Quadrangle::Quadrangle(double a, double b, double c, double d, double A, double B, double C, double D) : a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D)
{
	name = "Четырёхугольник";
}
double Quadrangle::get_a() { return a; }
double Quadrangle::get_b() { return b; }
double Quadrangle::get_c() { return c; }
double Quadrangle::get_d() { return d; }
double Quadrangle::get_A() { return A; }
double Quadrangle::get_B() { return B; }
double Quadrangle::get_C() { return C; }
double Quadrangle::get_D() { return D; }
void Quadrangle::print_info()
{
	std::cout << name << ": " << std::endl;
	std::cout << "Стороны: " << "a = " << a << "  b = " << b << "  c = " << c << " d = " << d << std::endl;
	std::cout << "Углы: " << "A = " << A << "  B = " << B << "  C = " << C << " D = " << D << std::endl;
	std::cout << std::endl;
}
