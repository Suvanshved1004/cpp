#include<iostream>
using namespace std;
int main()
{
	string username=" ";
	string  password=" ";
	bool loginsuccessfully = false;
	do
	{
		cout<<"\t\t==================================================="<<endl;
		cout<<"\t\t=====================LOGIN=========================";
		cout<<"\t\t==================================================="<<endl;
		
		cout<<"Enter USERNAME: \n";
		cin>>username;
		cout<<"Enter PASSWORD: \n";
		cin>>password;
		
		if(username=="admin"&&password=="admin123")
		{
			cout<<"\t\t===============================================\n";
			cout<<"\t\t_____________ACCESS GRANTED!!!_________________\n";
			cout<<"\t\t===============================================\n";
			cout<<"\t\t          Welcome to your Dashbord!            \n";
			cout<<"\t\t===============================================\n";
			loginsuccessfully=true;
			
		}
		else
		{
			cout<<"\t\================================================\n"<<endl;
			cout<<"\t\t________________INVALID CREDENTIALS!!!_________\n";
		}
	
	}
	while(!loginsuccessfully);
	
}