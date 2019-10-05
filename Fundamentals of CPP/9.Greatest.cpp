#include<iostream.h>
#include<conio.h>
class second;
class first
{
	int x;
	public:
	void get(int a)
	{
		x=a;
	}
	friend void max(first,second);
};
	class second
	{
		int y;
		public:
		void get(int b)
		{
			y=b;
		}
		friend void max(first,second);
	};
void max(first m,second n)
{
	if(m.x>n.y)
	{
		cout<<"a Is Greater";
	}
	else
	{
		cout<<"b Is Greater";
	}
}
	int main()
	{
		first f;
		second s;
		int m,n;
		clrscr();
		cout<<"\t\t\t--:Greatest Number Out Of Two Numbers:--\n";
		cout<<"Enter Value Of a=";
		cin>>m;
		cout<<"Enter Value Of b=";
		cin>>n;
		f.get(m);
		s.get(n);
		cout<<"\n";
		max(f,s);
		getch();
		return 0;
	}