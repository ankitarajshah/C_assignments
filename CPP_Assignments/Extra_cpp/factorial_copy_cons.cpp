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
		cout<<"Factorial of number "<<n<<" is :"<<fac<<endl;
	}	
	fact(const fact &f)
	{
		this->i=f.i;
		this->n=f.n;
		this->fac=f.fac;
		cout<<"Factorial of number "<<n<<" is :"<<fac;	
	}
	
	
};
int main()
{
	fact p;
	fact q(p);

	return 0;
}