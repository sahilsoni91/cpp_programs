#include<iostream.h>
#include<conio.h>
class sum
{
	int a,b,c;
	public:
	void get();
	void display();
};
	void sum::get()
	{
		cout<<"\t\t\t--:Summation Of Two Numbers:--\n";
		cout<<"Enter First Value=";
		cin>>a;
		cout<<"Enter Second Value=";
		cin>>b;
		c=a+b;
	}
	void sum::display()
	{
		cout<<"\nSum="<<c;
	}
	int main()
	{
		sum s;
		clrscr();
		s.get();
		s.display();
		getch();
		return 0;
	}