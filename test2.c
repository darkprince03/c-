#include<stdio.h>

	
void main()
{
	int a[3][3]={1,2,3,4,5,6};
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			printf("%d",j[a][i]);
	}

	
	int c=2,b=3;
	c+=b+=c+=b+=c;
	printf("\n%d %d",b,c);
	
	
int z[2][2][2]={1,2,3,4,5,6};
printf("\n%d",*(*(*(z+1)+0)+1));
	
	printf(5+"Good Morning\n");

	char *p;	
	p="Hello";
	;;
	printf("%cn",*&*p);
;	
}

