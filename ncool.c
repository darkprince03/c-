#include<stdio.h>
void main()
{	
	char c[50];
	int cool;
	printf("Enter your name: ");
	scanf("%s",c);
	
	printf("enter your coolness (1 to 10): ");
	scanf("%d",&cool);
	printf("Hey %s, ",c);
	if(cool>7)
	{	
		printf("you are Cool\n");
	}
	else
	{
		printf("You are not so cool\n");
	}
}
