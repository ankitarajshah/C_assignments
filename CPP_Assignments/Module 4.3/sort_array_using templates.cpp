#include<iostream>
using namespace std;

template<class A>
class sort
{
	public:
		A arr[10],i,j,k,n;
		void accept()
		{
			cout<<"Enter the size of array.";
			cin>>n;
			for(i=0;i<n;i++)
			{
				cout<<"Enter the elements ["<<i<<"] =";
				cin>>arr[i];
				
			}
			for(i=0;i<n;i++)
			{
				for(j=i+1;j<n;j++)
				{
					if(arr[i]>arr[j])
					{
						k=arr[i];
						arr[i]=arr[j];
						arr[j]=k;
					}
				}
				cout<<"Sort elements:"<<arr[i]<<endl;
				
			}
			
		}
};

int main()
{
	sort <int>s;
	s.accept();
	return 0;
}