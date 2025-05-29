#include <string>
#include "Figure.h"
#pragma once

class Triangle : public Figure
{
protected:
	double a = 0, b = 0, c = 0;
	double A = 0, B = 0, C = 0;
public:
	Triangle(double a, double b, double c, double A, double B, double C);
	double get_a();
	double get_b();
	double get_c();
	double get_A();
	double get_B();
	double get_C();
	void print_info() override;
};