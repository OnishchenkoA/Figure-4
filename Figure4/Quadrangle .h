#include <string>
#include "Figure.h"
#pragma once

class Quadrangle : public Figure
{
protected:
	double a, b, c, d;
	double A, B, C, D;
public:
	Quadrangle(double a, double b, double c, double d, double A, double B, double C, double D);
	double get_a();
	double get_b();
	double get_c();
	double get_d();
	double get_A();
	double get_B();
	double get_C();
	double get_D();
	void print_info() override;
};