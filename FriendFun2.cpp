#include <iostream>  
using namespace std;  
class B;          // forward declarartion.  
class A  
{  

    int x;  
    public:  
    void setdata(int i)  
    {  
        x=i;  
    }  
    friend void min(A,B);  
	friend int add(A,B); 
	friend int sub(A,B);
	friend int mul(A,B);           // friend function.  
};  

class B  
{  

    int y;  
    public:  
    void setdata(int i)  
    {  
        y=i;  
    }  
    friend void min(A,B); 
	friend int add(A,B); 
	friend int sub(A,B); 
	friend int mul(A,B);                 // friend function  
};  
void min(A a,B b)  
{  
    if(a.x<=b.y)  
    cout << a.x << std::endl;  
    else  
    cout << b.y << std::endl;  
}  
int add(A a,B b)
{
     return(a.x + b.y);
	
}
int sub(A a,B b)
{
	return(a.x - b.y);
}
int mul(A a,B b)
{
	return(a.x*b.y);
}

   int main()  
{  
   A a;  
   B b; 
	a.setdata(10);  
   b.setdata(20);  
   cout<<"Sum is "<<add(a,b)<<endl;
   cout<<"sub is"<<sub(a,b)<<endl;
   cout<<"mul is"<<mul(a*b)<<endl;
  
   min(a,b);  
    return 0;  
 }  