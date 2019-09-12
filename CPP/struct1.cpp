#include<iostream>
using namespace std;
struct Time{
	int hour;
	int minute;
	int second;
};
	
void printMilitary(const Time &);
void printStandard(const Time &);
int main()
{
	Time t;
	t.hour=10;
	t.minute=30;
	t.second=0;
	
	cout<<"Dinner will be held at: ";
	printMilitary(t);
	cout<<" Military time,\nwhich is ";
	//printStandard(t);
	//cout<<" standard time.\n";
	
	t.hour=29;
	t.minute=73;
	
	cout<<"Invlaid time: ";
	printMilitary(t);
	cout<<endl;
	
	return 0;
}

void printMilitary(const Time &t)
{
	cout<<(t.hour<10?"0":"")<<t.hour<<":"<<(t.minute<10?"0":"")<<t.minute;
}
void printStandard(const Time &t)
{
	cout<<(t.hour<10?"0":"")<<t.hour<<":"<<(t.minute<10?"0":"")<<t.minute;
}
