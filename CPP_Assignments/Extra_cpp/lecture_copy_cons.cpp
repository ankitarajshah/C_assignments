#include<iostream>
using namespace std;

class lecture_details
{
	public:
		string name_lec;
		string name_sub;
		string name_course;
		int num_lec;
	lecture_details()
	{ 
		cout<<"Enter the name of lecturer :";
		cin>>name_lec;
		cout<<"Enter the name of subject :";
		cin>>name_sub;
		cout<<"Enter the name of course :";
		cin>>name_course;
		cout<<"Enter the number of lectures :";
		cin>>num_lec;			
	}
	lecture_details(const lecture_details &b)
	{
		this->name_lec=b.name_lec;
		this->name_sub=b.name_sub;
		this->name_course=b.name_course;
		this->num_lec=b.num_lec;
		
	}
	
	void lec_details()
	{
		cout<<"Name of lecturer : "<<name_lec<<endl;
		cout<<"Name of subject : "<<name_sub<<endl;
		cout<<"Name of course : "<<name_course<<endl;
		cout<<"Number of lectures : "<<num_lec<<endl;
	}
};
int main()
{
	lecture_details a;
	a.lec_details();
	lecture_details l(a);
	l.lec_details();
	
	return 0;
}