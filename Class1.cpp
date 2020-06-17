#include "Class1.h"

Class1::Class1()
{
	a = 10;
}

Class2::Class2()
{
	b = 20;
}

int Class1::get()
{
	return a;
}

int Class2::get()
{
	return b;
}

int main()
{

	int x = 0;
	Class1 obj1;
	Class2 obj2;

	x = obj2.get();
	return 0;
}