#include <iostream>  
using namespace std; 
class ABC
{
	private:
		int balance=10000;
	protected:
		string name="Arman";
	public:
		string address="Delhi-9";
		
	void Display()
	{
		cout<<"Details: "<<name<<"\t"<<address<<"\t"<<balance<<endl;
	}
	friend void Add(ABC);
};
void Add(ABC a)
{
	a.balance+=500;
	cout<<"Balance is Updated"<<a.balance<<endl;
	cout<<"Name "<<a.name<<endl;
}


int main()
{
	ABC abc;
	Add(abc);
	
}