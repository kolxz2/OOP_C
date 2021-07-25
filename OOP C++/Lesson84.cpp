#include "Lesson84.h"

void Lesson84::SetX(int x)
{
	this->x = x;
}

int Lesson84::GetX()
{
	return x;
}

void Lesson84::Print()
{
	std::cout << "X = " << x << "Y = " << y << std::endl;
}

void Lesson84::SetY(int y)
{
	this->y = y;
}

int Lesson84::GetY()
{
	return y;
}

Lesson84::Lesson84(const Lesson84& other)
{
	this->x = other.x;
	this->y = other.y;
}

Lesson84::Lesson84()
{
	this->x = 0;
	this->y = 0;
}

Lesson84::Lesson84(int x)
{
	this->x = x;
	this->y = 0;
}

Lesson84::Lesson84(int x, int y)
{
	this->x = x;
	this->y = y;
}

bool Lesson84::operator==(const Lesson84& other)
{
	/*if (this->x == other.x && this->y == other.y)
	{
		return true;
	}
	else
	{
		return false;
	}*/
	return this->x == other.x && this->y == other.y;
}

bool Lesson84::operator!=(const Lesson84& other)
{
	return !(this->x == other.x && this->y == other.y);
}
