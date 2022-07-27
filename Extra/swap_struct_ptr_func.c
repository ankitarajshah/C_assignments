#include<stdio.h>
struct swap
{
	int a;
	int b;
};
void swap(int *a,int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	
}
void main()
{
	struct swap s1;
	int *x,*y;
//	printf("Enter value for A");
//	scanf("%d",&s1.a);
//	printf("Enter value for B");
//	scanf("%d",&s1.b);
	s1.a =10;
	s1.b =20;
	x = s1.a;
	y = s1.b;
	
	printf("Before swap value A =%d and B=%d",*(&x),*(&y));
	swap(&x,&y);
	printf("\nAfter swap value A =%d and B=%d",x,y);
}