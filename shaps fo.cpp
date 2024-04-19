// C++ program to create class to implement function overloading

#include <iostream>
using namespace std;
class measure
{
	public:
	void shape(int r);
	void shape(int l, int b);
	void shape(int t,int d,int e);

}; 
void measure::shape(int r)
{
	cout<<"area of the circle is "<<3.14*r*r;
}
void measure::shape(int l,int b)
{
 cout<<"area of the rectangle is"<<l*b;
}
void measure::shape(int t,int d,int e)
{
	cout<<"area of the triangle is"<<t*d*e;
}
int main()
{
	int arr[]={2,56,78,95,67,89,9,8,75};
	measure mea;
	mea.shape(5);
	mea.shape(24,32);
	mea.shape(10,15,15);
}
   
