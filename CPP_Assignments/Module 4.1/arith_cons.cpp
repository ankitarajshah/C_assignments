#include <iostream>
using namespace std;

class ASMD{
	
	public:
		int a,b,add,sub,mul;
		float div;
		
		ASMD()
		{
			a=10;
			b=20;
			add=a+b;
			sub=a-b;
			mul=a*b;
			div=a/(float)b;
			cout<<"Addition : "<<add<<endl;
			cout<<"Subtraction :"<<sub<<endl;
			cout<<"Multiplication : "<<mul<<endl;
			cout<<"Division : "<<div<<endl;
		}
		
};

int main()
{
	ASMD a;
	return 0;
}