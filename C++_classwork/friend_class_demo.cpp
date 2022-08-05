#include<iostream>
using namespace std;
class Ankita
{
	private:
		int num1;
		friend class Nikita;
	public:
		Ankita()
		{
			num1=10;
		}
	
};
class Nikita
{
	private:
		int num2;
	public:
		Nikita()
		{
			num2 =20;			
		}
	int add()
	{
		Ankita a1;
		return a1.num1+num2;
	}
};

int main()
{
	Nikita n;
	cout<<n.add();
	
	return 0;
}