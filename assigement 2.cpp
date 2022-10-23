/*
Name:
					Ali Haider
Department:
   					BS-Data Science
Subject:
					Programming Foundament
Session:
					2022 to 2026
Semester:
					1st
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float a,b;
    char op;
	while(1)
	{
		cout<<"\t\t\t\tenter a 1nd number:";
		cin>>a;
		cout<<"\t\t\t\tenter a 2nd number:";
		cin>>b;
		cout<<"\t\t\t\tenter a operator:";
		cin>>op;
switch(op)
{
	case '+':
	cout<<"\t\t\t\tadd:"<<a+b<<endl;
	break;
	case'-':
	cout<<"\t\t\t\tsub:"<<a-b<<endl;
	break;
	case'*':
	cout<<"\t\t\t\tmultiply:"<<a*b<<endl;	
	break;
	case'/':
	cout <<"\t\t\t\tdivide:"<<a/b<<endl;
	break;
	case'%':
	cout <<"\t\t\t\tRem:"<<(int)a%(int)b<<endl;
	break;
	default:
	cout<<"\t\t\t\tinvild operator\n";
}
char choice;
cout<<" \t\t\t\tEnter your choice for continue or not:\n ";
    cout << "\t\t\t\t---------------------------------------\n";
	cout<<"\t\t\t\tcontinue FOR y"<<endl;
	cout<<"\t\t\t\tNO FOR n"<<endl;
	cout << "\t\t\t\t---------------------------------------\n";
cin>>choice;
if(choice=='y')
{
	continue;
}
else if(choice=='n')
{
	break;
}
else
{
	cout<<"\n\t\t\t\tinvild your choice";
	break;
}
}
}