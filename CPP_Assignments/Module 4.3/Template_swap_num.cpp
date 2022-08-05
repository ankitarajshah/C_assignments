#include<iostream>
using namespace std;
template <typename T>

T swap_num(T a, T b)
	{
		T t;
		cout<<endl;
		cout<<"Before Swap A = "<<a<<"\t B = "<<b<<endl;
		t=a;
		a=b;
		b=t;
		cout<<"After Swap A = "<<a<<"\tB = "<<b;
		return 0;
	}
int main()
{
	int a=10,b=20;
	swap_num(a,b);
	return 0;
	
}