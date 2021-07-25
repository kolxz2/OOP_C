#include "lESSON80.h"

lESSON80::~lESSON80()
{
	delete[] data;
	std::cout << "\tDistruction start";
}
lESSON80::lESSON80()
{
	std::cout << "\tConstruction start";
}

lESSON80::lESSON80(int value)
{
	data = new int[value];
	for (int i = 0; i < value; i++)
	{
		data[i] = i;
	}
}

void lESSON80::Print(int value)
{
	for (int i = 0; i < value; i++)
	{
		std::cout << data[i] <<" ";
	}
}
