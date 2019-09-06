#include<stdio.h>
int fact(int );
void main()
{
	int a,f;
	printf("Enter a number: ");
	scanf("%d",&a);
	f=fact(a);
	printf("Factorial of %d is %d\n",a,f);
}
int fact(int a)
{	
	if(a==1 || a==0)
		return 1;
	else
		return (a*fact(a-1));
}
	
