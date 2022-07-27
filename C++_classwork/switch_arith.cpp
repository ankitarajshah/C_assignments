#include<iostream>
using namespace std;

int main()
{
	int a=10,b=20;
	cout<<"Enter value of A:";
	cin>>a;
	cout<<"Enter value of B: ";
	cin>>b;
	cout<<"\n A ="<<a<<endl;
	cout<<"\n B ="<<b<<endl;
		
	cout<<"\n===========Arithmatic calculation===========";
	cout<<"\nChoice Menu: 1-Addition,2-Subtraction,3-Multiplication,4-Division.\n";
	int choice;
	cin>>choice;
	switch(choice)
	{
		case 1:cout<<"Addition is "<<a+b<<endl;
				break;
		case 2:cout<<"Subtraction is "<<a-b<<endl;
				break;
		case 3:cout<<"Multiplication is "<<a*b<<endl;
				break;
		case 4:cout<<"Division is "<<a/float(b)<<endl;
				break;
		default:cout<<"Wrong choice.";
	}
	
	cout<<"Thankyou.";
	return 0;
	
}