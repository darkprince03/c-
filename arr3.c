#include<stdio.h>
void main()
{
	int a[3][3]={1,2,3,4,5,6,7,8,9};
	int b[6]={1,2,3,4,5,6};
	printf("%d\n",*(b+1));
	printf("%d\n",*(*(a+2)+1));
}
