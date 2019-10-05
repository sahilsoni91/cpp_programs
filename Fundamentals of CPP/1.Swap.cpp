#include<iostream.h>
#include<conio.h>	
int main()
{
	int a,b,c;
	clrscr();
	cout<<"\t\t\t--:Swapping Of Two Numbers:--\n";
	cout<<"Enter Value Of a=";
	cin>>a;
	cout<<"Enter Value Of b=";
	cin>>b;
	cout<<"\nValues Before Swapping:\n";
	cout<<"a="<<a<<"\n";
	cout<<"b="<<b<<"\n";
	c=a;
	a=b;
	b=c;
	cout<<"\nValues After Swapping:\n";
	cout<<"a="<<a<<"\n";
	cout<<"b="<<b;
	getch();
	return 0;
}
