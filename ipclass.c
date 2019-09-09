#include<stdio.h>
void main()
{
	char a[50],b[4][3]={'\0'},v[4];
	int i=0,j=0,k=0;
	printf("Enter the ip address");
	scanf("%s",a);
	while (a[i] != '\0')
  	{
    		if (a[i] == '.')
      		{
			printf("%s  ",b[k]);
			k++;
			i++;
			j = 0;
     		 }
   		 if (a[i] != '\0')
      		{
			b[k][j++] = a[i++];

      		}
  	}
	for(i=0;i<4;i++){
		printf("%s ",b[i]);
		int v=atoi(b[i]);
	}		
	for(i=0;i<4;i++){
		printf("%d ",v[i]);
	}
	
	
}
