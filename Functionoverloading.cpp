// C++ program to create class to implement function overloading

#include <iostream>
using namespace std;

class Calculator{
	public:
		int x=0;
		void Add(int a); //prototype 1
		void Add(int a,int b); //prototype 2
		void Add(int a, int b, int c); //prototype 3
		void Add(int a,int b,int c, int d); //prototype 4
		void Add(int a[],int n); //prototype 5
			
};
void Calculator::Add(int a)
{
	x+=a;
	cout<<"X="<<x<<endl;
} 
void Calculator::Add(int a,int b)
{
	x=a+b;
	cout<<"X="<<x<<endl;
} 
void Calculator::Add(int a,int b, int c)
{
	x=a+b+c;
	cout<<"X="<<x<<endl;
} 
void  Calculator::Add(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		x+=a[i];
	}
	cout<<"X="<<x<<endl;
} 


 

	

