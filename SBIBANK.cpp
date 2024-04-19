#include<iostream>
#include"Hierarical.cpp"
using namespace std;
int main()
{
	//BankAccount c1;
	SBI c2;
	
	while(1)
	{
	
	cout<<"\n ------SBI BANK SYSTEM----------\n";
	cout<<"\n1.Open Account"<<endl;
	cout<<"\n2.Display details"<<endl;
	cout<<"\n3.deposit money"<<endl;
	cout<<"\n4.withdraw money"<<endl;
	cout<<"\n0. exit";
	cout<<"\n________________________________"<<endl;
	cout<<"Enter your option"<<endl;
	int option;
	cin>>option;
	
	
	
	switch(option)
	{
		case 1:
			c2.Open();
			break;
			case 2:
				c2.Display();
				c2.bankdetails();
				break;
			case 3:
				c2.Deposit();
				break;
			case 4:
				c2.withdraw();
				break;
			case 0:
				exit(0);
			default:
				cout<<"Invalid Option"<<endl;
				break;
				
	}
}
}