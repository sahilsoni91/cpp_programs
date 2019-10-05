#include<iostream.h>
#include<conio.h>
class time
{
	int hour,min;
	public:
	void get(int a,int b);
	void sum(time,time);
	void show();
};
	void time::get(int a,int b)
	{
		hour=a;
		min=b;
	}
	void time::sum(time t1,time t2)
	{
		min=t1.min+t2.min;
		hour=min/60;
		min=min%60;
		hour=hour+t1.hour+t2.hour;
	}
	void time::show()
	{
		cout<<"Hours="<<hour<<"\n";
		cout<<"Minutes="<<min<<"\n";
	}
int main()
{
	time T1,T2,T3;
	int h,m,c,d;
	clrscr();
	cout<<"\t\t\t--:Calculating Time:--\n";
	cout<<"Enter Hours=";
	cin>>h;
	cout<<"Enter Minutes=";
	cin>>m;
	cout<<"\nEnter Hours=";
	cin>>c;
	cout<<"Enter Minutes=";
	cin>>d;
	T1.get(h,m);
	T2.get(c,d);
	T3.sum(T1,T2);
	cout<<"\nT1\n";
	T1.show();
	cout<<"\nT2\n";
	T2.show();
	cout<<"\nT3\n";
	T3.show();
	getch();
	return 0;
}