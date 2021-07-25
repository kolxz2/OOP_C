#include "lESSON83.h"

void lESSON83::Creater()
{
	this->data = new int[this->Size];
	for (int i = 0; i < this->Size; i++)
	{
		data[i] = i;
	}
	std::cout << "Construction start" << this << "\n";
}

lESSON83::lESSON83()
{
	this->Size = 0;
	lESSON83::Creater();
	std::cout << "Construction start\n";
}

lESSON83::lESSON83(int value)
{
	this->Size = value;
	lESSON83::Creater();
}

lESSON83::lESSON83(const lESSON83& other)
{
	this->Size = other.Size;
	this->data = new int[other.Size];
	for (int i = 0; i < other.Size; i++)
	{
		this->data[i] = other.data[i];
	}
	std::cout << "Called constructer for copy" << this << "\n" << std::endl;
}

lESSON83& lESSON83::operator=(const lESSON83& other)
{
	this->Size = other.Size;
	if (this->data != nullptr)
	{
		delete[] this->data;
	}
	this->data = new int[other.Size];
	for (int i = 0; i < other.Size; i++)
	{
		this->data[i] = other.data[i];
	}
	std::cout << "Called oerator for copy" << this << "\n" << std::endl;
	// TODO: insert return statement here
	return *this;
}


void lESSON83::Print()
{
	for (int i = 0; i < this->Size; i++)
	{
		std::cout << data[i] << " ";
	}
	std::cout << "Printing is end" << this <<"\n";
}
lESSON83::~lESSON83()
{
	delete[] data;
	std::cout << "Distruction start"<< this <<"\n";
}