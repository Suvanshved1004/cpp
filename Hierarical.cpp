#include<iostream>
using namespace std;

class BankAccount 
{
	private:
		string Accno;
		string Accname;
		string address;
		float balance;
		static string IFSC;
		
		public:
			//default construtor
//			BankAccount()
//			{
//				Accno="1000001" ;
//				Accname="abcdef";
//				address="XYZW";
//				balance=000.00;
//				cout<<"account opened"<<endl;
//			}
			
			~BankAccount()
			{
				cout<<"Object Destroyed"<<endl;
			}
			void Open()
			{
			cout<<"Enter account number: ";
			cin>>Accno;
			cout<<"Enter holder name : ";
			cin>>Accname;
			cout<<"Enter address: ";
			cin>>address;
			cout<<"Enter balance: ";
			cin>>balance;
			cout<<"Account successfully opened";
			
			}
			void Display()
			{
				cout<<"\n Account Details "<<endl;
				cout<<"\n Account number="<<Accno;
				cout<<"\n Account name="<<Accname;
				cout<<"\n"<<"IFSC"<<IFSC  <<endl;
				cout<<"\n address="<<address;
				cout<<"\n balance="<<balance;
				
			}
			void Deposit()
			{
				float amount;
				cout<<"enter the amount "<<endl;
				cin>>amount;
				if (amount > 0)
				{
					balance+=amount;
					cout<<"deposit successfully"<<balance<<endl;
					
				}
				else
				{
					cout<<"invaild amount"<<endl;
				}
			}
	            	
				void withdraw()
				{
				float amount;
				cout<<"enter amount to withdraw"<<endl;
				cin>>amount;
			
				if(amount>0 && amount <=balance)
				{
					balance-=amount;
					cout<<"withdraw successfull"<<balance<<endl;
				}
				else
				{
					cout<<"invalid withdraw"<<endl;
				}
		}
		
		
			
				
		
};
string BankAccount::IFSC="1017";
//
class SBI:public BankAccount
{
	public: static string Bank;
			static float roi;
			
	       void bankdetails()
	       {
	       	cout<<Bank<<endl;
	       	cout<<"ROI:- "<<roi<<endl;
	       	
		   }
	
 } ;
 
 
 string SBI::Bank="\t--SBI Kohat--";
 float SBI::roi=7.5;
 
 //
 class ICICI:public BankAccount
{
	public: static string Bank;
			static float roi;
			
	       void bankdetails()
	       {
	       	cout<<Bank<<endl;
	       	cout<<"ROI:- "<<roi<<endl;
	       	
		   }
	
 } ;
 string ICICI::Bank="\t--ICICI DELHI--";
 float ICICI::roi=9.5;
 //
  class kotak:public BankAccount
{
	public: static string Bank;
			static float roi;
			
	       void bankdetails()
	       {
	       	cout<<Bank<<endl;
	       	cout<<"ROI:-"<<roi<<endl;
	       	
		   }
	
 } ;
 string kotak::Bank="\t--kotak DELHI--";
 float kotak::roi=8.5;
 //
  class PNB:public BankAccount
{
	public: static string Bank;
			static float roi;
			
	       void bankdetails()
	       {
	       	cout<<Bank<<endl;
	       	cout<<"ROI :- "<<roi<<endl;
	       	
		   }
	
 } ;
 string PNB::Bank="\t---PNB DELHI---";
 float PNB::roi=8.5;
//int main()
//{
//	//BankAccount c1;
//	SBI c2;
//	
//	while(1)
//	{
//	
//	cout<<"\n ------APNA BANK SYSTEM----------\n";
//	cout<<"\n1.Open Account"<<endl;
//	cout<<"\n2.Display details"<<endl;
//	cout<<"\n3.deposit money"<<endl;
//	cout<<"\n4.withdraw money"<<endl;
//	cout<<"\n0. exit";
//	cout<<"\n________________________________"<<endl;
//	cout<<"Enter your option"<<endl;
//	int option;
//	cin>>option;
//	
//	
//	
//	switch(option)
//	{
//		case 1:
//			c2.Open();
//			break;
//			case 2:
//				c2.Display();
//				c2.bankdetails();
//				break;
//			case 3:
//				c2.Deposit();
//				break;
//			case 4:
//				c2.withdraw();
//				break;
//			case 0:
//				exit(0);
//			default:
//				cout<<"Invalid Option"<<endl;
//				break;
//				
//	}
//}
//}

	