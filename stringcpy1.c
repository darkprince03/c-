#include<stdio.h>
void strcpy1(char *,char *);
int strcmp1(char *,char *);
char* strstr1(char *,char *);
void main()
{	
	int cmp;
	char a[]="ranjit",c[]="i acsadsdm ran jit am pillai",d[]="ran";
	char b[10];
	char *str;
	strcpy1(b,a);
	printf("%s\n",b);
	cmp=strcmp1(b,a);
	if(cmp==0)
		printf("Not Same\n");
	else 
		printf("Same\n");
	cmp=strcmp1(b,c);
	if(cmp==0)
		printf("Not Same\n");
	else 
		printf("Same\n");
	str=strstr1(c,d);
	printf("%s",str);
	
}
void strcpy1(char *b,char *a)
{
	int i;
	for(i=0;a[i]!='\0';i++)
		b[i]=a[i];
	b[i]='\0';
}	
int strcmp1(char *b,char *a)
{
	int i,cmp=0,l1=0,l2=0;
	for(i=0;a[i]!='\0';i++)
		l1++;
	for(i=0;b[i]!='\0';i++)
		l2++;
	if(l1==l2){
		for(i=0;a[i]!='\0';i++)
		{
			if(b[i]==a[i]){
				cmp=1;
			}
			else
			{
				cmp=0;
				break;
			}	
		}
	}
	return cmp;
	
}

char* strstr1(char *a,char *b)
{
	int i=0,j,q,k=0,l1=0;
	char *p;
	
	while(a[i]!='\0')
	{
		q=i;j=0,k=0;;
		while(b[j]==a[q] && b[j]!='\0'&& a[q]!='\0')
		{
			p[k++]=a[q++];
			j++;
		}
		if(b[j]=='\0'){
			while(a[q]!='\0')
				p[k++]=a[q++];
			break;
		}
		i++;
		
	}
	
	p[k]='\0';
	return p;	
}
































	
