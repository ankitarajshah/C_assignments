#include<iostream>
using namespace std;
class fact
{
	public:
	int i,n,fac=1;
	fact()
	{
		cout<<"Enter the number :";
		cin>>n;
		for(i=1;i<=n;i++)
		{
			fac=fac*i;
		}
		cout<<"Factorial of number "<<n<<"is :"<<fac;
	}	
	
	
};
int main()
{
	fact f;
	return 0;
}