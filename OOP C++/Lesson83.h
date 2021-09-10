#pragma once
#include <iostream>
class Lesson83
{
private:
	int* data;
	int Size;
	void Creater();
public:
	Lesson83();
	Lesson83(int value);
	Lesson83(const Lesson83& other);
	Lesson83& operator=(const Lesson83& other);
	void Print();
	~Lesson83();
};


