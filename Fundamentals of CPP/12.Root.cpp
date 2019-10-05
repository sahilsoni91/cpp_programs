#include<iostream.h>
#include<conio.h>
#include<math.h>
class root
{
	float n,q;
	public:
	root(int p)
	{
		n=p;
		q=sqrt(n);
	}
	root(root &s)
	{
		q=s.q;	
	}
	void display()
	{
		cout<<"Square Root="<<q;
	}
};
	int main()
	{
		float a;
		clrscr();
		cout<<"\t\t\t--:Square Root Of A Number:--\n";
		cout<<"Enter Number=";
		cin>>a;
		root r(a);
		root t(r);
		cout<<"\n";
		t.display();
		getch();
		return 0;
	}