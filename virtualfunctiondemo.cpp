// C++ program to demonstrate how we will calculate
// the area of shapes USING VIRTUAL FUNCTION
#include <fstream>
#include <iostream>
using namespace std;

// Declaration of Base class
class Shape {
public:
	// Usage of virtual constructor
	virtual void calculate()
	{
		cout << "Area of your Shape ";
	}
	// usage of virtual Destuctor to avoid memory leak
	virtual ~Shape()
	{
		cout << "Shape Destuctor Call\n";
	}
};


