#include<iostream>
using namespace std;
class student
{
	public:
		int roll_no;
		string name;
		student()
		{
			cout<<"Enter the Roll number of Student : ";
			cin>>roll_no;
			cout<<"Enter the Name of Student : ";
			cin>>name;	
		}
};
class test:public student
{
	public:
		int s1,s2,s3,s4,s5,tot=0;
		test()
		{
			cout<<"Enter the marks of five subjects :";
			cin>>s1;
			cin>>s2;
			cin>>s3;
			cin>>s4;
			cin>>s5;
			tot = (s1+s2+s3+s4+s5);
		}
};
class result:public test
{
	public:
	float per;
	result()
	{
		per = tot/(float)5;
	}
	void display()
	{
		cout<<"=====Student Marksheet====="<<endl;
		cout<<"Roll number : "<<roll_no<<endl;
		cout<<"Name of student : "<<name<<endl;
		cout<<"Marks of subjects are : "<<endl;
		cout<<s1<<endl<<s2<<endl<<s3<<endl<<s4<<endl<<s5<<endl;;
		cout<<"Total marks of subjects : "<<tot<<endl;
		cout<<"Percentage of subjects : "<<per<<endl;
	}
};

int main()
{	
	int i,n;
	cout<<"Enter number of students : "<<endl;
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		result r;
		r.display();
	}
	return 0;
}