#include<iostream>
using namespace std;
class box
{
	public:
		double width,height,depth;
		box()
		{
			cout<<"Default constructor."<<endl;
			width=10;height=10;depth=10;
		}
		
		box(double height,double width,double depth)
		{
			
			this->height=height;
			this->width=width;
			this->depth=depth;	
		}
		box(const box &v)
		{
			
			this->height=v.height;
			this->width=v.width;
			this->depth=v.depth;
		}
		void volume()
		{
			cout<<"Volume is :"<<(width*height*depth)<<endl;
		}
};
int main()
{
	box b;
	b.volume();
	box b1(20,20,20);
	b1.volume();
	box b2(b);
	b2.volume();
	
	return 0;
}