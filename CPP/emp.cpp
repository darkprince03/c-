#include<iostream>
#include<string>
using namespace std;
class Emp
{
	public:
		Emp();
		void setEmp();
		void calctc();
		void print();

	private:
		long int bs;
		double hra;
		long int sales;
		string name;
		string code;
		long int ctc;
};

Emp::Emp()
{
	bs=0;
	hra=0;
	sales=0;
	name="Vijay Deenanath Chauhan";
	code="0000";
	ctc=0;
}
void Emp::setEmp()
{
	cout<<"Enter name: ";
	getline(cin,name);
	cout<<"Enter code: ";
	getline(cin,code);
	cout<<"Enter Basic salary: ";
	cin>>bs;
	if(bs<0)
		bs=0;
	cout<<"Enter sales: ";
	cin>>sales;
	if(sales<0)
		sales=0;	
}
void Emp::calctc()
{	
	hra=0.3*bs;
	if((hra+bs)>500000){
		ctc=ctc+100000;}
	if(sales>2000000){
		ctc=ctc+(0.1*sales);}
	ctc=ctc+bs+hra;	
}
void Emp::print()
{
	cout<<endl;
	cout<<"Name: "<<name<<endl<<"Code: "<<code<<endl<<"Basic Salary: "<<bs<<endl<<"Sales: "<<sales<<endl<<"CTC: "<<ctc<<endl;
}
int main()
{
	Emp e;
	e.print();
	e.setEmp();
	e.calctc();
	e.print();
	
	return 0;
}



