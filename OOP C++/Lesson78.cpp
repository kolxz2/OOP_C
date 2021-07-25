#include "Lesson78.h"

Lesson78::Lesson78(int value, int value1)
{
	x = value;
	y = value1;
}

int Lesson78::GetX()
{
	return x;
}

void Lesson78::Print()
{
	std::cout << "X = " << x << "Y = " << y << std::endl;
}
