#include "Lesson82.h"

void Lesson82::SetX(int x)
{
	this->x = x;
}

int Lesson82::GetX()
{
	return x;
}

void Lesson82::Print()
{
	std::cout << "X = " << x << "Y = " << y << std::endl;
}

void Lesson82::SetY(int y)
{
	this->y = y;
}

int Lesson82::GetY()
{
	return y;
}

Lesson82::Lesson82(const Lesson82& other)
{
	this->x = other.x;
	this->y = other.y;
}
