#include "stdafx.h"
#include "Figure.h"
#include "Triangle.h"
#include "Pryamoug_Triangle.h"
#include "Ravnobedr_Triangle.h"
#include "Ravnostor_Triangle.h"
#include "Quadrangle .h"
#include "Paralel.h"
#include "Pryamoug.h"
#include "Romb.h"
#include "Square.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	Triangle triangle(12, 26, 18, 65, 45, 92);
	triangle.print_info();
	Pryamoug_Triangle pryam_triangle(24, 86, 14, 65, 36);
	pryam_triangle.print_info();
	Ravnobedr_Triangle ravnobedr_triangle(48, 26, 65, 90);
	ravnobedr_triangle.print_info();
	Ravnostor_Triangle ravnostor_triangle(29);
	ravnostor_triangle.print_info();
	Quadrangle quadrangle(26, 12, 54, 68, 65, 35, 90, 45);
	quadrangle.print_info();
	Paralel paralel(26, 16, 95, 65);
	paralel.print_info();
	Pryamoug pryamoug(98, 42);
	pryamoug.print_info();
	Romb romb(19, 95, 120);
	romb.print_info();
	Square square(33);
	square.print_info();
}
