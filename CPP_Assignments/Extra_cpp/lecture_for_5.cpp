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
	void lec_details()
	{
		cout<<"=======Lecture details========"<<endl;
		cout<<"Name of lecturer : "<<name_lec<<endl;
		cout<<"Name of subject : "<<name_sub<<endl;
		cout<<"Name of course : "<<name_course<<endl;
		cout<<"Number of lectures : "<<num_lec<<endl;
		cout<<"================================="<<endl;
	}
};
int main()
{
	for(int i=1;i<=5;i++)
	{
	lecture_details a;
	a.lec_details();
	}	
	return 0;
}