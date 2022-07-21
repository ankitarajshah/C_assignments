#include <iostream>
using namespace std; 
class matrix
	{
		public:
		int a[3][3];
		void array()
		{
		cout<<"Enter array elements:"<<endl;
		for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					cin>>a[i][j];
				}	
			}
		for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
				//	cout<<"Elements ["<<i<<"]["<<j<<"]="<<a[i][j]<<endl;
				cout<<"  "<<a[i][j];
				}
				cout<<endl;
			}
		}
		
	};
	
int main()

{
	matrix a;
	a.array();
	return 0;
	
}