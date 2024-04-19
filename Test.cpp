// Declaration of Derived class
#include <iostream>
#include"virtualfunctiondemo.cpp"
using namespace std;
class Rectangle : public Shape {
public:
	int width, height, area;

	void calculate()
	{
		cout << "Enter Width of Rectangle: ";
		cin >> width;

		cout << "Enter Height of Rectangle: ";
		cin >> height;

		area = height * width;
		cout << "Area of Rectangle: " << area << "\n";
	}

	// Virtual Destuctor for every Derived class
	virtual ~Rectangle()
	{
		cout << "Rectangle Destuctor Call\n";
	}
};

// Declaration of 2nd derived class
class Square : public Shape {
public:
	int side, area;

	void calculate()
	{
		cout << "Enter one side your of Square: ";
		cin >> side;

		area = side * side;
		cout << "Area of Square: " << area << "\n";
	}

// Virtual Destuctor for every Derived class
	virtual ~Square()
	{
		cout << "Square Destuctor Call\n";
	}
};
