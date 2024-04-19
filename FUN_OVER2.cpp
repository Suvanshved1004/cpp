// C++ program to create class to implement function overloading

#include <iostream>
using namespace std;

class Calculator{
	public:
		
		int Add(int a,int b); //prototype 1
		float Add(float a,float b); //prototype 2
		string Add(string a, string b); //prototype 3
		double Add(double a,double  b); //prototype 4
		
			
};

int Calculator::Add(int a,int b)
{
	int x;
	x=a+b;
	return x;
} 
float Calculator::Add(float a,float b)
{
	float x;
	x=a+b;
	return x;
	
} 
string  Calculator::Add(string a, string b)
{
	return a+b;
} 
double Calculator::Add(double a,double b)
{
	double x;
	x=a+b;
	return x;
	
} 


 int main()
 {
 
	Calculator cal;
	cout<<cal.Add(66,99)<<endl;;
	cout<<cal.Add(66.99,99.77)<<endl;
	cout<<cal.Add("Suvansh","Ved");
	
}
