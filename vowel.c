#include<stdio.h>
void main(){
	char a;
	printf("Enter a character: ");
	scanf("%c",&a);
	if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
	{
		printf("%c is a Vowel",a);
	}
	else
	{
		printf("%c is a consonant",a);
	}
}
