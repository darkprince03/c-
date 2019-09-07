#include<stdio.h>
void main()
{
	int x=4;	
	int *y;
	y=&x;
	printf("%d\n",x);
	printf("%d\n",y);
	printf("%d\n",&x);
	printf("%d\n",*y);
	printf("%u\n",y);
	printf("%u\n",&y);
}
