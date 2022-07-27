#include<iostream>
using namespace std;
class student
{
	public:
		int sid;
	 	string sname;
		student()
		{
			sid = 27;
			sname="Ankita";
		}
};
class extramarks
{
	public:
		int sp;
		extramarks()
		{
			sp = 80;
		}
};
class result:public student,public extramarks
{
	public:
		int s1,s2,s3,tot;
		float avg;
		result()
		{
			s1=80;
			s2=90;
			s3=90;
			tot=s1+s2+s3;
			avg=tot/(float)3;
		}
		void display()
		{
			cout<<"Student ID : "<<sid<<endl;
			cout<<"Student Name : "<<sname<<endl;
			cout<<"Sports Marks : "<<sp<<endl;
			cout<<"Total Marks : "<<tot<<endl;
			cout<<"Average Marks : "<<avg<<endl;
		}
};

int main()
{
	result r;
	r.display();
	return 0;
	
}