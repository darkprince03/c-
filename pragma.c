#include<stdio.h>
void star();
void star1();
void star2();
#pragma startup star 65
#pragma startup star1 104
#pragma startup star2 
#pragma exit star 65
#pragma exit star1 104
#pragma exit star2 
void main(){
	printf("Main");
}
void star(){
	printf("Star");
}
void star1(){
	printf("Star1");
}
void star2(){
	printf("Star2");
}
