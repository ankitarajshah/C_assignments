#include<iostream>
#include<string.h>
using namespace std;
class Addstring
{
	public:
		char s1[25],s2[25];
		
		Addstring(char str1[],char str2[])
		{
			strcpy(this->s1,str1);
			strcpy(this->s2,str2);
		}
		
		void operator +()
		{
			cout<<"Concatenation: "<<strcat(s1,s2);
		}
		
		
};
int main()
{
	char str1[25]= "Ankita";
	char str2[25]="Shah";
	Addstring a(str1,str2);
	+a;
	
	return 0;
}