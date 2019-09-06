#include<stdio.h>
int findmod(int , int );
void main()
{
	int a,b;
	printf("Enter 2 numbers: ");
	scanf("%d %d",&a,&b);
	int c=findmod(a,b);
	printf("Mod of a and b is %d\n",c);
}
int findmod(int a, int b)
{
	return a%b;
}	
