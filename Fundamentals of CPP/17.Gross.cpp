#include<iostream.h>
#include<conio.h>
class salary
{
	protected:
	int sal;
	public:
	void get_s(int);
};
	class increment
	{
		protected:
		int increase;
		public:
		void get_i(int);
	}
class gross::public salary,public increment
{
	int gs;
	public:
	void display();
};
	void salary::get_s(int x)
	{
		sal=x;
	}
	void increment::get_i(int y)
	{
		increase=y;
	}
	void gross::display()
	{
		gs=sal+increase;
		cout<<"Gross Salary="<<gs<<"/-";
	}
int main()
{
	gross g;
	int j,k;
	clrscr();
	cout<<"\t\t\t--:Calculating Gross Salary:--\n";
	cout<<"Enter Salary=";
	cin>>j;
	cout<<"Enter Increment=";
	cin>>k;
	g.get_s(j);
	g.get_i(k);
	cout<<"\n";
	g.display();
	getch();
	return 0;
}