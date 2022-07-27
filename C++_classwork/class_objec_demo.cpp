#include<iostream>
using namespace std;

class SimpleDemo
{
	public:					//public so we can access in main 
		int a;
};
int main()
{
	SimpleDemo sd; //reference datatype with variable name
	sd.a =27;
	cout<<"A = "<<sd.a;
	return 0;
}