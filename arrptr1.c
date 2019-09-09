#include<stdio.h>
void main()
{
	char *name[]={"ranjit","pillai","ravindralala","hello"};
	printf("%s",*(name+2)+7);
	char *n[2];
	char *a;
	scanf("%s",a);
	n[0]=a;
	printf("%s",n[0]);

}
