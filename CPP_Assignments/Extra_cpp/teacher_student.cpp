#include<iostream>
using namespace std;

class studentdetails
{
	public:
		int sage;
		string sname;
			studentdetails()
			{
				sage=22;
				sname="nik";
			}
	
};
class percantage
{
	public:
	 float per;
	 	percantage()
	 	{
	 		per=45.00;
		}
};
class teacherdetails:public studentdetails,public percantage
{
	public:
		int age,salary;
		string name;
		teacherdetails()
		{
			age=32;
			name="dimpal";
			salary=32000;
		}
		void display()
		{
			cout<<"============================="<<endl;
			cout<<"      student details        "<<endl;
			cout<<"============================="<<endl;
			cout<<"STUDENT NAME :"<<sname<<endl;
			cout<<"STUDENT AGE :"<<sage<<endl;
			cout<<"STUDENT PERCANTAGE :"<<per<<endl;
			cout<<"============================="<<endl;
			cout<<"       teacher details       "<<endl;
			cout<<"============================="<<endl;
			cout<<"TEACHER NAME :"<<name<<endl;
			cout<<"TEACHER AGE :"<<age<<endl;
			cout<<"TEACHER SALARY :"<<salary<<endl;
			
		}
	
};


int main()
{
	teacherdetails t;
	t.display();
	
	return 0;
	
}