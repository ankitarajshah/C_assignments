#include<iostream>
using namespace std;
class Ankita
{
	private:
		int money;
		friend int Nikita(Ankita);
	public:
		Ankita()
		{
			money = 5000;
		}
};
int Nikita(Ankita a)
{
	a.money += 5000;
	return a.money;
}
int main()
{
	Ankita a1;
	cout<<"Money shared to Ankita :"<<(Nikita(a1));
	return 0;
}