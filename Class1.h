#pragma once
class Class1
{
	int a;
public:
	Class1();
	int get();
};

class Class2 : public Class1
{
	int b;
public:
	Class2();
	int get();
};
