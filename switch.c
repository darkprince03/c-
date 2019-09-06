#include<stdio.h>
void main()
{
	int i;
	printf("Who is the captian of India in cricket?\n ");
	printf("0-Dhoni 1-Virat 2-Hardik 3-Rohit\n");
	printf("Enter your choice :");
	scanf("%d",&i);
	switch(i){
		case 0:
			printf("Sorry Dhoni is not captain of India. Virat is the captain of India. Dhoni was an ex captain of India.");
			break;
		case 1:
			printf("You are correct. Virat is the captain of India. ");
			break;
		case 2:
			printf("Sorry Hardik is not captain of India. Virat is the captain of India. Hardik is one of the cricketer of India.");
			break;
		case 3:
			printf("Sorry Rohit is not captain of India. Virat is the captain of India. Rohit is vice captain of India.");
			break;
		default:
			printf("Please choose a correct option.");
	}
}
