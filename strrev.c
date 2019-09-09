#include <stdio.h>

#include <string.h>

#include<stdlib.h>

char * mystrndup(char *str,int n)
{

	char * p;
	p=malloc(n);
	memcpy(p,str,n);
	return p;
}

int main(int argc,char ** argv)
{
	int i;
	char * dup;
	
	for(i=argc-1;i>0;i--){
		dup=mystrndup(argv[i],strlen(argv[i]));
		printf("%s ",dup);
	}
	printf("\n");
	free(dup);
}
