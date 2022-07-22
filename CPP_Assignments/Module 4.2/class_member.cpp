#include<iostream>
using namespace std;
class person
{
	public:
	string mem_name;
	int age;
	person()
	{
		cout<<"Enter the member name : ";
		cin>>mem_name;
		cout<<"Enter the age : ";
		cin>>age;
	}
};
class student
{
	public:
		int s1,s2,s3,total;
		float per;
		student()
		{
		cout<<"Enter the subject marks :";
		cin>>s1;
		cin>>s2;
		cin>>s3;
		total = s1+s2+s3;
		per = total/(float)3;
		cout<<per;
		}
		
};
class teacher:public person,public student
{
	public:
		string teacher_name;
		int salary;
		teacher()
		{
			cout<<"\nEnter the name of teacher :";
			cin>>teacher_name;
			cout<<"Enter the salary of teacher :";
			cin>>salary;
		}
		void gets()
		{
		cout<<"Name of member :"<<mem_name<<endl;
		cout<<"Age of member :"<<age<<endl;
		cout<<"Percentage of member :"<<per<<endl;
		cout<<"Teacher name :"<<teacher_name<<endl;
		cout<<"Salary of teacher :"<<salary<<endl;
		}	
};

int main()
{
	teacher t;
	t.gets();
	return 0;
}
