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
	int i,f=1;
	for(i=1;i<=a;i++){
		f=f*i;
	}
	return f;
}
	
