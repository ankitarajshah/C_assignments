#include <iostream>
using namespace std;
int main()
{
	int a1[3][3],a2[3][3],a3[3][3];
	
	cout<<"Enter array1 elements:"<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<"Enter array elements["<<i<<"]["<<j<<"] :";
			cin>>a1[i][j];
		}
	}
	cout<<"Display array1 elements:"<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
		//	cout<<"Array Elements ["<<i<<"]["<<j<<"] ="<<a1[i][j]<<endl;
			cout<<"["<<i<<"]["<<j<<"] ="<<a1[i][j]<<endl;
		}
	}
	
	cout<<"Enter array2 elements:"<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<"Enter array elements["<<i<<"]["<<j<<"] :";
			cin>>a2[i][j];
		}
	}
	cout<<"Display array2 elements:"<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
		//	cout<<"Array Elements ["<<i<<"]["<<j<<"] ="<<a1[i][j]<<endl;
			cout<<"["<<i<<"]["<<j<<"] ="<<a2[i][j]<<endl;
		}
	}
	
	cout<<"Addition of elements:"<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
		//	cout<<"Array Elements ["<<i<<"]["<<j<<"] ="<<a1[i][j]<<endl;
		a3[i][j] = a1[i][j]+a2[i][j];
			cout<<"["<<i<<"]["<<j<<"] ="<<a3[i][j]<<endl;
		}
	}
	return 0;
}