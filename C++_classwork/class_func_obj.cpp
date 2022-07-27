#include<iostream>
using namespace std;

class Ankita
{
	public:					//public so we can access in main 
		int a;
		void getA()
		{
			cout<<"Enter value for A="<<endl;
			cin>>a;
		}
		void showA()
		{
			cout<<a;
		}
};
int main()
{
	Ankita a; //reference datatype with variable name
	a.getA();
	a.showA();
	return 0;
}