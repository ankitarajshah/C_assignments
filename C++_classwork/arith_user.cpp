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
	cout<<"Addition is "<<a+b<<endl;
	cout<<"Subtraction is "<<a-b<<endl;
	cout<<"Multiplication is "<<a*b<<endl;
	cout<<"Division is "<<a/float(b)<<endl;
	return 0;
	
}