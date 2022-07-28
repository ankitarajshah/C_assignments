#include<iostream>
using namespace std;
class Distance
{
	private:
		int feet,inches;
		public:
			Distance(int f,int i)
			{
				feet = f;
				inches =i;
			}
			void display()
			{
				cout<<"Feet = "<<feet<<"\t"<<"Inches = "<<inches<<endl;
			}
			Distance operator -() // operator overload we used 
			{
				this->feet = -feet;
				this->inches = -inches;
				return Distance(this->feet,this->inches);
			}
};
int main()
{
	Distance d1(-4,5),d2(-6,-7);
	-d1;
	d1.display();
	-d2;
	d2.display();
	return 0;
}