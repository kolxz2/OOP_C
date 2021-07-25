#pragma once
#include <iostream>
class lESSON83
{
private:
	int* data;
	int Size;
	void Creater();
public:
	lESSON83();
	lESSON83(int value);
	lESSON83(const lESSON83& other);
	lESSON83& operator=(const lESSON83& other);
	void Print();
	~lESSON83();
};


