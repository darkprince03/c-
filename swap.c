#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter 2 numbers: ");
	scanf("%d %d",&a,&b);
	a^=b^=a^=b;
	printf("After swapping :a = %d b = %d",a,b);
}
