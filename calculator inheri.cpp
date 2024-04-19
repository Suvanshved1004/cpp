#include<iostream>
using namespace std;

class addr
{
	public: int add(int a, int b)
	{
		return (a+b);		
	}
};
class Subtractor
{
	public: int Sub(int a,int b)
	{
		return(a-b);
	}
};
class Multiplication
{
	public: int Multi(int a,int b)
	{
		return (a*b);
	}
	
};
class Divison
{
	public: int div(int a,int b)
	{
		return (a/b);		
	}
};
class Calculator:public addr,public Subtractor,public  Multiplication, public  Divison

{
	public : void compute()
	{
		int r=add(100,200);
		cout<<"sum is"<<r<<endl;
		int x=Sub(100,200);
		cout<<"sub is"<<x<<endl;
		int y=Multi(100,200);
		cout<<"multi is"<<y<<endl;
		int z=div(100,200);
		cout<<"div is"<<z<<endl;
	}
};
int main()
{
	Calculator c1;
	c1.compute();
	c1.add(100,200);
		
	
}