#pragma once
#include <string>



class Figure
{
protected:
	std::string name;
public:
	virtual void print_info();
};