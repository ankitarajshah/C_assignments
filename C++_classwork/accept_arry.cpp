#include <iostream>
using namespace std;
int main()
{
	int arr1[5],arr2[5];
	cout<<"Enter the array1 elements:"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter elements ["<<i<<"]: ";
		cin>>arr1[i];	
	}
	cout<<"Display the array1 elements:"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<"Element ["<<i<<"] ="<<arr1[i]<<endl;
	}
	
	cout<<"Enter the array2 elements:"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter elements ["<<i<<"]: ";
		cin>>arr2[i];	
	}
	cout<<"Display the array2 elements:"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<"Element ["<<i<<"] ="<<arr2[i]<<"\t";
	} 
	
	return 0;
	
}