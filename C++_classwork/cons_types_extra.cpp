#include <iostream>
using namespace std;
class Box
{
	public:
		int a,b;
		Box()
		{
			cout<<"*--*--*--*--*--*--*--*--*--*--*--*"<<endl;
			cout<<"default constructor called."<<endl<<endl;
			a=10;
			b=20;
		}
		Box(int a , int b)
		{
			cout<<"*--*--*--*--*--*--*--*--*--*--*--*"<<endl;
			cout<<"parameterized constructor called."<<endl<<endl;
			this->a=a;
			this->b=b;
		}
		
		Box(const Box &p)
		{
			cout<<"*--*--*--*--*--*--*--*--*--*--*--*"<<endl;
			cout<<"copy constructor called."<<endl<<endl;
			this->a=p.a;
			this->b=p.b;
		}
		void volume()
		{
			cout<<"A = "<<a<<"\tB = "<<b<<endl<<endl;
			
		}
	
};
int main()
{
	Box chirag;
	chirag.volume();
	Box b(100,200);
	b.volume();
	Box n(chirag);
	n.volume();
	return 0;
}
