#include<stdio.h>
#include<string.h>
void main()
{	
	char p[]="ranjit";
	char q[10],r[10];
	char s[]="i am ranjit pillai";
	char *a;
	strcpy(q,p);
	printf("%s\n",q);
	strncpy(r,p,5);
	printf("%s\n",r);
	a=strstr(s,p);
	printf("%s\n",a);
}
