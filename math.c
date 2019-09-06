#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter values of a and b \n");
	scanf("%d %d",&a,&b);
	printf("Addition of 2 numbers is : %d\n",a+b);
	printf("Subtraction of 2 numbers is : %d\n",a-b);
	printf("Multiplication of 2 numbers is : %d\n",a*b);
	printf("Division of 2 numbers is : %f\n",(float)a/b);

	return 0;
}
