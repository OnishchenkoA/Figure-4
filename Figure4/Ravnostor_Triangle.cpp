#include "stdafx.h"
#include "Triangle.h"
#include "Ravnostor_Triangle.h"
#include <iostream>

Ravnostor_Triangle::Ravnostor_Triangle(double a) : Triangle(a, a, a, 60, 60, 60)
	{
		name = "Равносторонний треугольник";
	}