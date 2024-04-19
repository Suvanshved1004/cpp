// Method Overriding

#include <iostream>
using namespace std;
class Shape
{
	public: 
	void Getdata()
	{
			cout<<"Getting Data from user..."<<endl;
	}
	void Area()
	{
		cout<<"Calculating area....."<<endl;
	}
};

class Rectangle:public Shape
{
	private: float l,b;
	public: void Getdata(float l, float b)
	{
		this->l=l;
		this->b=b;
		
	}
	void Area()
	{
		float ar=l*b;
		cout<<"Area of Rectangle "<<ar<<endl;
	}

	
	
	
	
};

	class Circle :public Shape
	{
		private: int r;
		public: void Getdata(int r)
		{
			this->r=r;
		}
		void Area()
		{
			int ar=3.14*r*r;
			cout<<"Area of circle"<<ar<<endl;
		}
	};
	
class Triangle :public Shape
{
		private: int t, d,e;
		public:
		 void Getdata(int t,int d, int e)
		{
			this->t=t;
			this->d=d;
			this->e=e;
		}
		void Area()
		{
			int ar=t*d*e;
			cout<<"Area of Triangle"<<ar<<endl;
		}
};


int main()
{
	Rectangle r;
	r.Getdata(100.00,80.00);
	r.Area();
	Circle c;
	c.Getdata(10);
	c.Area();
	Triangle T;
	T.Getdata(10,15,12);
	T.Area();
}
	
