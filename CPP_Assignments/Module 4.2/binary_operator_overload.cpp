#include<iostream>
using namespace std;
class demo
{
	float a,b;
	public:
		void get();
		void show();
		demo operator +(demo);
		demo operator -(demo);
		demo operator *(demo);
		demo operator /(demo);	
		int operator ==(demo);
};

void demo::get()
{
	cout<<"Enter the values of a and b :\n";
	cin>>a>>b;
}
void demo::show()
{
	cout<<"a = "<<a<<"\t b = "<<b;
}

demo demo::operator +(demo d1)
{
	demo d2;
	d2.a = a + d1.a;
	d2.b = b + d1.b;
	return d2;
}

demo demo::operator -(demo d1)
{
	demo d2;
	d2.a = a - d1.a;
	d2.b = b - d1.b;
	return d2;
}
demo demo::operator *(demo d1)
{
	demo d2;
	d2.a = a * d1.a;
	d2.b = b * d1.b;
	return d2;
}
demo demo::operator /(demo d1)
{
	demo d2;
	d2.a = a /(float) d1.a;
	d2.b = b /(float) d1.b;
	return d2;
}
int demo::operator ==(demo d1)
{
	if((a==d1.a)&&(b==d1.b))
	{
		return 1;
	}
	else
	{
		return 0;	
	}
}
int main()
{
	int ch;
	demo d1,d2,d3;
	cout<<"First object :\n";
	d1.get();
	cout<<"Second object :\n";
	d2.get();
	cout<<"Operator overloading Menu :\n";
	cout<<"\n1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Division \n 5.Comparision \n 6.Exit";
	cout<<"Enter the choice(1-6)";
	cin>>ch;
	switch(ch)
	{
		case 1: d3=d1+d2;
				cout<<"Addition is :";
				d3.show();
				break;
		case 2: d3=d1-d2;
				cout<<"Subtraction is :";
				d3.show();
				break;
		case 3: d3=d1*d2;
				cout<<"Multiplication is :";
				d3.show();
				break;
		case 4: d3=d1/d2;
				cout<<"Divisionn is :";
				d3.show();
				break;
		case 5: if(d1 == d2)
				{
					cout<<" Equal.";	
				}
				else
				{
					cout<<"Not Equal.";
				}
				break;
		case 6: exit(0);
				break;
		default:
				cout<<"Enter Valid choice.";			
	}
	return 0;
	
}