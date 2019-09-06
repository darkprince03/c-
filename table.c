#include<stdio.h>
void main()
{
	int i,j;
	printf("Enter a number for table: ");
	scanf("%d",&j);
	printf("Table for %d is : \n",j);
	for(i=1;i<=10;i++){
		printf("%d * %d = %d\n",j,i,i*j);
	}

}
