#include<iostream>
using namespace std;
namespace Suvansh
{
	class ALPHA
	{
		
	public:
	void sayhello()
	{
		cout<<"Hello India"<<endl;
		
	}
	void sayhi(string str)
	{
		cout<<"Hi"<<str<<endl;
	}
};
class Calc
{
	
public:
	int add(int a, int b)
	
	{
		return (a+b);
	}
	int sub(int a, int b)
	{
		return (a-b);
	}
	
	int mul(int a, int b)
	{
		return (a*b);
	}
	int div(int a, int b)
	{
		return (a/b);
	}
};

}
