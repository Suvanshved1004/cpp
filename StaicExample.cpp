#include <iostream>  
using namespace std; 
#include<string.h> 
class Account {  
   public:  
       int accno; //data member (also instance variable)      
       string name; //data member(also instance variable)  
       static float roi; 
	   static int count;       // static field
	   struct dob{
	   	int day;
	   	char mon[3];
	   	int year ;
	   }date;
       Account(int accno, string name,int day,char mon[3], int year)   
        {    
            this->accno = accno;    
            this->name = name; 
			this->date.day=day;
			strcpy(this->date.mon,mon);
			this->date.year=year;
			   
            count+=1;    
        }
		~Account()
		{
			cout<<"Object destroyed"<<endl;
			
		}    
       void display()    
        {    
            cout<<accno<<" "<<name<<" "<<roi<<""<<date.day<<"-"<<date.mon<<"-"<<date.year<<endl;   
        }  
	static void Change_roi( float r)
	{
		roi=r;
		
	}
};  
float Account::roi=6.5; 
int Account::count=0;   
int main(void) {  
    Account a1 =Account(201, "Sanjay",12,"jan",2004); //creating an object of Employee   
    Account a2=Account(202, "Nakul",24,"feb",2005); //creating an object of Employee  
    a1.display();    
    a2.display(); 
	Account::Change_roi(7.9) ;
	Account a3 =Account(201, "Suvansh",10,"jun",2006);
	a3.display();
	cout<<" total objects created "<<Account::count<<endl;
	
    return 0;  
}  