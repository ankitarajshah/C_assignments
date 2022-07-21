#include<iostream>
using namespace std;
class cricketer
{
	public:	
	string name,role,batting_style,bowling_style;
	int age;
	cricketer()
	{
		cout<<"Enter the name of cricketer:";
		cin>>name;
		cout<<"Enter the role of cricketer:";
		cin>>role;
		cout<<"Enter the batting_style of cricketer:";
		cin>>batting_style;
		cout<<"Enter the bowling_style of cricketer:";
		cin>>bowling_style;
	}
	
};
class batsman: public cricketer
{
	public:
		int no_match,tot_runs;
		float avg_runs;
		int best_per;
		
		void details()
		{
			cout<<"Enter the number of matches played.";
			cin>>no_match;
			cout<<"Enter the Total_runs =";
			cin>>tot_runs;
			cout<<"Average runs";
			avg_runs=tot_runs/(float)no_match;
			cout<<avg_runs;
			cout<<"Enter best performance.";
			cin>>best_per;
		}
		void display()
		{
			cout<<"====CRICKETER DETAILS===="<<endl;
			cout<<"Name of cricketer ="<<name<<endl;
			cout<<"Role of cricketer ="<<role<<endl;
			cout<<"Batting style ="<<batting_style<<endl;
			cout<<"Bowling style ="<<bowling_style<<endl;
			cout<<"Number of matches played ="<<no_match<<endl;
			cout<<"Total runs ="<<tot_runs<<endl;
			cout<<"Average runs ="<<avg_runs<<endl;
			cout<<"Best performance ="<<best_per<<endl;
			
		}
		
};
int main()
{
	batsman b;
	b.details();
	b.display();
	return 0;	
} 