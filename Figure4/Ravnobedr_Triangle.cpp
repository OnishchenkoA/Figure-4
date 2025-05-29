#include "stdafx.h"
#include "Triangle.h"
#include "Ravnobedr_Triangle.h"
#include "Figure.h"
#include <iostream>

Ravnobedr_Triangle::Ravnobedr_Triangle(double a, double b, double A, double B) : Triangle(a, b, a, A, B, A)
	{
		name = "Равнобедренный треугольник";
	}