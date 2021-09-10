#include <iostream>
#include <string>
#include "Lesson84.h"
using namespace std;

int main()
{
	Lesson84 a(5, 6);
	Lesson84 b(3, 7);
	bool result;
	result = a == b;
	std::cout << "Result is: " << result << endl;
	return 0;
}

