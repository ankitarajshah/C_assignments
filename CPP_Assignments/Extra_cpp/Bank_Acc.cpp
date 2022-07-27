#include<iostream>
using namespace std;
class Account
{
	public:
		string cust_name;
		long long acc_num,mob_num;
		long long bank_bal=0,cur_bal,dep_amt,withdr_amt,service_ch=1000;
		float si,rate =2.5,time;
		Account()
		{
			cust_name = "Ankita Raj Shah";
			acc_num = 123654789;
			mob_num =987456321;
			cout<<endl;
//			cout<<"Enter the customer name : ";
//			cin>>cust_name;
//			cout<<"Enter the account number :";
//			cin>>acc_num;
//			cout<<"Enter the mobile number :";	
//			cin>>mob_num;
		}
		void detials()
		{
			cout<<endl;
			
			cout<<"=======State Bank of India======="<<endl;
			cout<<"Customer name :"<<cust_name<<endl;
			cout<<"Account number :"<<acc_num<<endl;
			cout<<"Mobile number :"<<mob_num<<endl;		
		}
};
class saving:public Account
{
	public:
	
	void deposit()
	{
		cout<<"===========Saving Account=========="<<endl;
		cout<<"==========Deposit============="<<endl;
		cout<<"Enter the amount to be deposited : ";
		cin>>dep_amt;
		cur_bal = bank_bal+dep_amt;
		cout<<"Current balance in account is : "<<cur_bal<<endl;
		cout<<"No cheque book facility."<<endl;
	}
	void simple_interest()
	{
		cout<<"Simple interest for current balance : "<<cur_bal<<endl;
		cout<<"Enter the time in years :";
		cin>>time;
		cout<<"Rate is :"<<rate<<endl;
		si = (cur_bal*time*rate)/100;
		cout<<"Simple interest is :"<<si<<endl;
		bank_bal = si+cur_bal;
		cout<<"Bank balance with interest is : "<<bank_bal<<endl;		
	}
	void withdraw()
	{
		cout<<endl;
		cout<<"============Withdraw=========="<<endl;
		cout<<endl;
		cout<<"Enter the amount to be withdraw :";
		cin>>withdr_amt;
		if(bank_bal > 10000)
		{
			cur_bal=bank_bal-withdr_amt;
			cout<<"Current bank balance is :"<<cur_bal<<endl;
		}
		else
		{
			
			cout<<"Account with insufficient balance."<<endl;
		}	
	}
	
};
class current:public Account
{
	public:
	
	void deposit()
	{
		cout<<"===========Current Account=========="<<endl;
		cout<<endl;
		cout<<"==========Deposit============="<<endl;
		cout<<endl;
		cout<<"Enter the amount to be deposited : ";
		cin>>dep_amt;
		cur_bal = bank_bal+dep_amt;
		cout<<"Current balance in account is : "<<cur_bal<<endl;
		cout<<"No Simple interest on bank balance."<<endl;
		bank_bal= cur_bal;
		cout<<"Bank balance is : "<<bank_bal<<endl;
		cout<<"Cheque book facility available"<<endl;
	}
//	void simple_interest()
//	{
//		cout<<"Simple interest : "<<endl;
//		cout<<"Enter the time in years :";
//		cin>>time;
//		cout<<"Rate is :"<<rate<<endl;
//		si = (cur_bal*time*rate)/100;
//		cout<<"Simple interest is :"<<si<<endl;
//		bank_bal = si+cur_bal;
//		cout<<"Bank balance with interest is : "<<bank_bal<<endl;		
//	}
	void withdraw()
	{
		cout<<"============Withdraw=========="<<endl;
		cout<<endl;
		cout<<"Enter the amount to be withdraw :";
		cin>>withdr_amt;
		if(bank_bal < withdr_amt)
		{
			cout<<"Account with insufficient balance less than Rs.10,000."<<endl;
			
		}
		else
		{
			cur_bal=bank_bal-withdr_amt;
			cout<<"Withdraw amount successfull : "<<withdr_amt<<endl;
			cout<<"Current bank balance is :"<<cur_bal<<endl;
		}
			if(cur_bal<10000)
			{
			cout<<"Hence serive charge of Rs.1000 is charged."<<endl;
				
			bank_bal =cur_bal-service_ch;
			cout<<"Current bank balance is :"<<bank_bal<<endl;
			}
			
	}
	
};
int main()
{
	Account a;
	
	a.detials();
	int choice;
	cout<<endl;
	cout<<"Account type : 1)Saving account.	2)Current account."<<endl;
	cout<<"Enter the choice of account :";
	cin>>choice;

	if(choice == 1)
	{	
		saving s;
		s.deposit();
		s.simple_interest();
		s.withdraw();
	}
	else if(choice == 2)
	{
		current c;
		c.deposit();
	//	c.simple_interest();
		c.withdraw();	
	}
	else
	{
		cout<<"Enter the valid choice."<<endl;
	}
	return 0;
}