#include<iostream>
#include <string>
using namespace std;
class Student
{
	public:
	float id=1;
	string name="Suvansh";
	string course="BCA";
	
	
	void displaydata()
	{
		cout<<"id:"<<id<<"name:"<<name<<"course"<<course<<endl;
		
	}	
};
class Exam:public Student
{
	public:
	int semester=1; 
	int sub[5];
	int total=0;
	void Getmarks()
	{
		for(int i=0;i<5;i++)
		{
			cout<<"Enter Marks "<<i+1<<":";
			cin>>sub[i];
			total+=sub[i];
			
		}
}
		void show()
		{
			displaydata();
			cout<<"Semester :"<<semester<<endl;
			cout<<"Total Marks :"<<total<<endl;
		}
		
		
};
class ExamResult : public Exam 
{
public:
    string grade;
    void GetGrade()
    {
    	if(total>200)
    	{
    		grade="Qualified";
		}
		else
		{
			grade="Not Qualified";
		}
		cout<<"Grade :"<<grade<<endl;
    	
	}

    void displayResult()
	 {
        show();
        GetGrade();
    }
    
	
};
