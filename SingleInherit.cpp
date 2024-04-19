#include <iostream>  
using namespace std;  
 class Account {  
   public:  
   int id=101;
   float salary = 60000;
   string name="Suvansh"; 
   void Inputdata()
   {
   	cout<<"Enter Emp Id , Name And Basic"<<endl;
   	cin>>id>>name>>salary;
   	
	}  
 };  
class Programmer: public Account {  
   public:  
   string skill="CPP";
   float bonus = 5000;
   void Inputskill()
   {
   	cout<<"Enter skill "<<endl;
   	cin>>skill;
   }
   
   void Totalsal()
   {
   	int t=salary+bonus;
   	cout<<"Total salary Rs."<<t<<endl;
	  } 
	 void Show()
   {
   	cout<<"Details :"<<id<<"\t"<<name<<"\t"<<skill<<endl;
	}   
   };       
int main(void) {  
     Programmer p1;  
     p1.Show();
	 p1.Totalsal(); 
	 Programmer p2;
	 p2.Inputdata();
	 p2.Inputskill();
	 p2.Show();
	 p2.Totalsal();    
    return 0;  
}  