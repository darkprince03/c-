#include<stdio.h>
void main()
{
	int a,i,j;
	printf("Enter number of lines: ");
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		for(j=1;j<=i;j++){
			printf("%d ",i);
		}
		printf("\n");
	}
}
