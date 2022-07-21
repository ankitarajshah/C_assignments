#include<stdio.h>

void main()

{
	int n1=0,n2=1,n3=0,n,i;
	printf("\n%d  %d",n1,n2);
	printf("\nEnter number of elements =");
	scanf("\n %d",&n);
	printf("\n% \t %d",n1,n2);
	for(i=2;i<=n;i++)
		{
			n3=n1+n2;
			printf(" %d ",n3);
			n1=n2;
			n2=n3;
		}
}