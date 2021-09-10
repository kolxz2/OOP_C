#include "Lesson83.h"

void Lesson83::Creater()
{
	this->data = new int[this->Size];
	for (int i = 0; i < this->Size; i++)
	{
		data[i] = i;
	}
	std::cout << "Construction start" << this << "\n";
}

Lesson83::Lesson83()
{
	this->Size = 0;
	Lesson83::Creater();
	std::cout << "Construction start\n";
}

Lesson83::Lesson83(int value)
{
	this->Size = value;
	Lesson83::Creater();
}

Lesson83::Lesson83(const Lesson83& other)
{
	this->Size = other.Size;
	this->data = new int[other.Size];
	for (int i = 0; i < other.Size; i++)
	{
		this->data[i] = other.data[i];
	}
	std::cout << "Called constructer for copy" << this << "\n" << std::endl;
}

Lesson83& Lesson83::operator=(const Lesson83& other)
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


void Lesson83::Print()
{
	for (int i = 0; i < this->Size; i++)
	{
		std::cout << data[i] << " ";
	}
	std::cout << "Printing is end" << this <<"\n";
}
Lesson83::~Lesson83()
{
	delete[] data;
	std::cout << "Distruction start"<< this <<"\n";
}
