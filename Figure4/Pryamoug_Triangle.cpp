#include "stdafx.h"
#include "Triangle.h"
#include "Pryamoug_Triangle.h"
#include <iostream>

Pryamoug_Triangle::Pryamoug_Triangle(double a, double b, double c, double A, double B) : Triangle(a, b, c, A, B, 90)
	{
		name = "Прямоугольный треугольник";
	}