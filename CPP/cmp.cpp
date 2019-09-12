#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter 1st number A: ";
	cin>>a;
	cout<<"Enter 2nd number B: ";
	cin>>b;
	if(a==b)
		cout<<"Equal"<<endl;
	if(a>b)
		cout<<"A is greater than B"<<endl;
	if(a<b)
		cout<<"B is greater than A"<<endl;
	if(a>=b)	
		cout<<"A is greater than or equal to B"<<endl;
	if(a<=b)	
		cout<<"B is greater than or equal to A"<<endl;
}
