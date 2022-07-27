#include <iostream>
using namespace std;
class Box
{
	public:
	Box()
	{
		cout<<"Constructor called."<<endl;
	}	
	void volume()
	{
		cout<<"Method called."<<endl;
	}
};
int main()
{
	Box ankita;
	ankita.volume();
	
	return 0;
	
}