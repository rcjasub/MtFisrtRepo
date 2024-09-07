#include"Myclass.h"
#include<iostream>

int MyClass::count = 0;

MyClass::MyClass()
	:member{0}
{
	count++;
	std::cout << "count is now: " << count << std::endl;
}

MyClass::~MyClass()
{
	count--;
	std::cout << "count is now: " << count << std::endl;
}

int MyClass::GetCount()
{

	return count;
}

