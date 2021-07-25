#include <iostream>
#include <string>
class Lesson84
{
public:
	void SetX(int x);
	int GetX();
	void Print();
	void SetY(int y);
	int GetY();
	Lesson84(const Lesson84& other);
	Lesson84();
	Lesson84(int x);
	Lesson84(int x, int y);
	bool operator== (const Lesson84& other);
	bool operator!= (const Lesson84& other);
private:
	int x, y;
};
