#include <iostream>
#include <string>
class Lesson82
{
public:
	void SetX(int x);
	int GetX();
	void Print();
	void SetY(int y);
	int GetY();
	Lesson82(const Lesson82 &other);
private:
	int x, y;
};
