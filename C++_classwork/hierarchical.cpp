#include<iostream>
using namespace std;
class side
{
	protected:
		int l;
	public:
		void setvalue(int x)
		{
			l=x;
		}	
};
class square:public side
{
	public:
		int Square()
		{
			return l * l;
		}
};
class cube:public side
{
	public:
		int Cube()
		{
			return l * l * l;
		}
};
int main()
{
	square sq;
	sq.setvalue(10);
	cout<<"\nSquare is : "<<sq.Square();
	
	cube c;
	c.setvalue(5);
	cout<<"\n Cube is :"<<c.Cube();
	return 0;
}