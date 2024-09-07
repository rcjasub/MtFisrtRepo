#pragma once
class MyClass {

public:

	 MyClass();
	~MyClass();

	static int GetCount();

private:
	int member;
	static int count;

};