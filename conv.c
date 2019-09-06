#include<stdio.h>
void main(){
	char a;
	printf("Enter a character: ");
	scanf("%c",&a);
	if(a=='j')
	{
		a='j'-31;
	}
	printf("%c \n",a);
}
