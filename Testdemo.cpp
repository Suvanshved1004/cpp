
#include"Test.cpp"
#include<iostream>
int main()
{

	// base class pointer
	Shape* S;
	Rectangle r;

	// initialization of reference variable
	S = &r;

	// calling of Rectangle function
	S->calculate();
	Square sq;

	// initialization of reference variable
	S = &sq;

	// calling of Square function
	S->calculate();

	// return 0 to tell the program executed
	// successfully
	return 0;
}
