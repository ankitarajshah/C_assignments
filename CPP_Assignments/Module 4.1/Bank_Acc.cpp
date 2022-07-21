#include<iostream>
using namespace std;

class Data_members
{
	public:
	string Name;
	long long Acc_num;
	string Type_acc;
	float Bal_amt = 0;
	float Wit_amt;	
	inline void display()
	{
		cout<<endl;
		cout<<"Enter the name of depositor : ";
		cin>>Name;
		cout<<endl<<endl;
		cout<<"Enter Account number : ";
		cin>>Acc_num;
		cout<<endl<<endl;
		cout<<"Enter Account Type : ";
		cin>>Type_acc;
		cout<<endl<<endl;
		cout<<"Balance Amount = "<<Bal_amt<<endl;
	}
	void deposit()
	{
		cout<<"Enter amount to be deposited : ";
		cin>>Bal_amt;
		cout<<endl;
		cout<<"Balance amount = "<<Bal_amt<<endl;
		cout<<"Enter amount to be withdraw : ";
		cin>>Wit_amt;
		cout<<endl;
		Bal_amt = Bal_amt - Wit_amt;
		cout<<"Balance amount after withdraw : "<<Bal_amt;
		cout<<endl;
		cout<<"Name : "<<Name<<endl;
		cout<<endl;
		cout<<"Balance amount : "<<Bal_amt<<endl;
	}
};

int main()
{
	Data_members BA;
	BA.display();
	BA.deposit();
	return 0;
}