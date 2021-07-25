#pragma once
#include <iostream>
class lESSON80
/*Нужно для динамического выделения памяти.
Выделея память динамически нужно заботиться, 
чтобы освободить выделенную память*/
{
private:
	int* data;
public:
	lESSON80();
	lESSON80(int value);
	void Print(int value);
	~lESSON80();
};

