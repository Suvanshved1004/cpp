#include <iostream>  
using namespace std;  
 class Account 
 {  
   public:  
   float salary = 60000;
   float id= 123;
   char *name="suvansh";
      
 };  
   class Programmer: public Account 
   {  
   public:  
   float bonus = 5000;
   
   void totalsal()
   {
   	int t= salary + bonus;
   		cout<<"Total salary Rs"<<t<<endl;
	   }    
   };       
int main(void) 
{  
     Programmer p1;  
     cout<<"Salary: "<<p1.salary<<endl;    
     cout<<"Bonus: "<<p1.bonus<<endl;  
	 cout<<"ID::"<<p1.id<<endl; 
	 cout<<"name::"<<p1.name<<endl;
	 p1.totalsal();
	 
    return 0;  
}  