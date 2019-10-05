#include<iostream.h>
#include<conio.h>
inline int mul(int a,int b)
{
	int c;
	c=a*b;
	return c;
}
	int main()
	{
		int d,e,f;
		clrscr();
		cout<<"\t\t\t--:Multiplication Of Two Numbers:--\n";
		cout<<"Enter First Number=";
		cin>>d;
		cout<<"Enter Second Number=";
		cin>>e;
		f=mul(d,e);
		cout<<"Multiplication="<<f;
		getch();
		return 0;
	}