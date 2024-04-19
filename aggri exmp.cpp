#include <iostream>  
using namespace std;  
class Address {  
    public:  
   	 string addressLine, city, state,pin;    
     Address(string addressLine, string city, string state,string pin)    
    {    
        this->addressLine = addressLine;    
        this->city = city;    
        this->state = state;  
		this->pin=pin;  
    }    
}; 
class DOB
{
	public:
		int day, month, year;
		DOB(int day,int month,int year)
		{
			this->day=day;
			this->month=month;
			this->year=year;}
	
	
 }; 
class Employee    
    {    
        private:  
        Address* address; 
		DOB* dob; //Employee HAS-A Address   
        public:  
        int id;    
        string name;    
        Employee(int id, string name, Address* address)    
       {    
           this->id = id;    
           this->name = name;    
           this->address = address;    
       }    
     void display()    
       {    
           cout<<id <<" "<<name<< " "<<endl;     
             cout<<address->addressLine<< " "<< address->city<< " "<<address->state<<address->pin<<endl;
			cout<<"DOB- 10,6,2004";    
       }    
   };   
int main(void)
 {  
    Address a1= Address("C-146, Sec-15","Noida","UP","110056");  
	DOB d1= DOB(10,6,2004);
    Employee e1 = Employee(101,"Nakul",&a1);    
            e1.display();   
   return 0;  
}