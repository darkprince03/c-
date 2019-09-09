#include<stdio.h>

struct info{
	int age;
	char name[20];
	char no[10];
	
};
void main()
{
	struct info s1;
	printf("Enter Name age and phone no. : ");
	gets(s1.name);
	scanf("%d %s",&s1.age,s1.no);
	printf("Name: %s \nAge: %d \nPhone No.: %s",s1.name,s1.age,s1.no);
}
	
