#include<iostream>
using namespace std;
class si
{
	public:
		float sim_int,princi_amt,rate=2.5;
		int time;
	si()
	{
		cout<<"Simple interest :"<<endl;
		cout<<"Enter the principle amount : ";
		cin>>princi_amt;
		cout<<"Enter the time in years:";
		cin>>time;
		cout<<"Enter the rate :"<<rate;
	//	cin>>rate;
		sim_int=(princi_amt*time*rate)/100;
		cout<<"\nSimple interest is "<<sim_int;
	}	
};
int main()
{
	si s;
	return 0;
}