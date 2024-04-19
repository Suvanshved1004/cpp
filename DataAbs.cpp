// Data Abstraction Using Library function

#include <iostream>
#include<math.h>
using namespace std;

class Calculator{
	private: int x;
	protected: double y;
	public:
		void GetSqrt()
		{
			cout<<"enter a numbder "<<endl;
			cin>>x;
			y=sqrt(x);
			cout<<"Sqrt of "<<x<<"="<<y<<endl;	
			
		}
		void GetPow()
		{
			y=pow(x,5);
			cout<<"Power is "<<y<<endl;
			
		}
};

int main()
{
	Calculator c1;
	c1.GetSqrt();
}