#include<iostream.h>
#include<conio.h>
class counting
{
	static int c;
	int n;
	public:
	void getdata();
	void getcount();
};
	void counting::getdata()
	{
		cout<<"Enter Number=";
		cin>>n;
		c++;
	}
	void counting::getcount()
	{
		cout<<"Count\tNumber\n";
		cout<<c<<"\t"<<n;
	}
	int counting::c;
int main()
{
	counting a,b,d;
	clrscr();
	cout<<"\t\t\t--:Printing Numbers With Increasing Counter:--\n";
	a.getdata();
	a.getcount();
	cout<<"\n";
	b.getdata();
	b.getcount();
	cout<<"\n";
	d.getdata();
	d.getcount();
	getch();
	return 0;
}