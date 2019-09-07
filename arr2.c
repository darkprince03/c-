#include<stdio.h>
void main()
{	
	int i,j;
	int a[3]={1,2,3};
	int b[2][2]={1,2,3,4};
	for(i=0;i<3;i++)
		printf("%d\n",i[a]);
	printf("\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++)
			printf("%d\n",i[b][j]);
	}
}
