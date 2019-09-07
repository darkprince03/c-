#include<stdio.h>
void swap(int *a,int *b);
void main()
{
	int x,y;
	x=3;y=4;
	printf("%d %d\n",x,y);
	swap(&x,&y);
	printf("%d %d\n",x,y);
}
void swap(int *a,int *b)
{	
	int *t;
	*t=*a;
	*a=*b;
	*b=*t;
}
	
