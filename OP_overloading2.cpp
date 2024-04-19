#include<iostream>
using namespace std;
class Sample
{
	int x,y,z;
	public: Sample(int a,int b,int c)
	{
		x=a;
		y=b;
		z=c;
	}
	void Display()
	{
		cout<<"x="<<x<<"\n"<<"y="<<y<<"\n"<<"z="<<z<<"\n";
	}
	
	void operator --()
	{
		x=x-1;
		y=y-1;
		z=z-1;
	}
	
};


int main()
{
	Sample s1(45,-44,55);
	s1.Display();
	--s1;		// operator overload
	s1.Display();
	
	return 0;
}

