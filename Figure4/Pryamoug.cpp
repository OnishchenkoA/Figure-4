#include "stdafx.h"
#include "Pryamoug.h"
#include "Paralel.h"
#include "Quadrangle .h"
#include "Figure.h"
#include <iostream>


Pryamoug::Pryamoug(double a, double b) : Paralel(a, b, 90, 90)
	{
		name = "Прямоугольник";
	}