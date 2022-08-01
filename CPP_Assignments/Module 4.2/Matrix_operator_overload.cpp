#include<iostream>
using namespace std;
class Matrix
{
	int a[2][2];
	public:
		void accept();
		void display();
		void operator +(Matrix b);
};

void Matrix::accept()
{
	cout<<"Matrix elements :"<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin>>a[i][j];
		}
	}
}
void Matrix::display()
{
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<" "<<a[i][j];
		}
		cout<<endl;
	}
	
}
void Matrix::operator +(Matrix b)
{
	int p[2][2];
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			p[i][j]=a[i][j] + b.a[i][j];
		}
	}	
	cout<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<"    "<<p[i][j];
		}
		cout<<endl;
	}
}

int main()
{
	Matrix m,n;
	cout<<"Matrix 1 elements :"<<endl;
	m.accept();
	m.display();
	cout<<"Matrix 2 elements :"<<endl;
	n.accept();
	n.display();
	cout<<"Addition of Matrix 1 and Matrix 2 elements :"<<endl;
	m+n;
	return 0;
}