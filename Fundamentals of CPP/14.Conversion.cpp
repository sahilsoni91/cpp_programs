#include<iostream.h>
#include<conio.h>
class change
{
	int x,y,z;
	public:
	void get(int a,int b,int c);
	void display();
	void operator-();
};
	void change::get(int a,int b,int c)
	{
		x=a;
		y=b;
		z=c;
	}
	void change::display()
	{
		cout<<"x="<<x<<"\n";
		cout<<"y="<<y<<"\n";
		cout<<"z="<<z;
	}
	void change::operator-()
	{
		x=-x;
		y=-y;
		z=-z;
	}
int main()
{
	change n;
	int g,h,i;
	clrscr();
	cout<<"\t\t\t--:Sign Conversion Of Numbers:--\n";
	cout<<"Enter Number=";
	cin>>g;
	cout<<"Enter Number=";
	cin>>h;
	cout<<"Enter Number=";
	cin>>i;
	n.get(g,h,i);
	cout<<"\n";
	n.display();
	cout<<"\n\nAfter Sign Conversion\n\n";
	-n;
	n.display();
	getch();
	return 0;
}