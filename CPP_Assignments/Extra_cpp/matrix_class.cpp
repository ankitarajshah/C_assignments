#include<iostream>
using namespace std;
class array
{
	public:
		int a[3][3];
		void accept()
		{
			cout<<"The matrix."<<endl;;
			for(int i=0;i<3;i++)
			{
				
				for(int j=0;j<3;j++)
				{
					cout<<"Enter the matrix elements ["<<i<<"] ["<<j<<"]:";
					cin>>a[i][j];
					cout<<endl;
				}	
			}
		}
		void display()
		{
			cout<<"The matrix elements :"<<endl;;
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					cout<<" "<<a[i][j];
				}	
			cout<<endl;
			}
		}
};
int main()
{
	array a;
	a.accept();
	a.display();
	return 0;
	
}