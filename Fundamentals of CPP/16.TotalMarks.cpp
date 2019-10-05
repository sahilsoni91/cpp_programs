#include<iostream.h>
#include<conio.h>
class student
{
	protected:
	int no;
	public:
	void get(int);
	void put();
};
	void student::get(int a)
	{
		no=a;
	}
	void student::put()
	{
		cout<<"Roll Number="<<no<<"\n";
	}
class test:public student
{
	protected:
	float sub1,sub2;
	public:
	void get_marks(float,float);
	void put_marks();
	void result();
}
	void test::get_marks(float x,float y)
	{
		sub1=x;
		sub2=y;
	}
	void test::put_marks()
	{
		cout<<"Marks Of First Subject="<<sub1<<"\n";
		cout<<"Marks Of Second Subject="<<sub2<<"\n";
	}
	void test::result()
	{
		int total;
		total=sub1+sub2;
		cout<<"Total="<<total;
	}
int main()
{
	int f;
	float g,f;
	clrscr();
	cout<<"\t\t\t--:Total Of Marks:--\n";
	cout<<"Enter Roll Number=";
	cin>>f;
	cout<<"Enter Marks Of First Subject=";
	cin>>g;
	cout<<"Enter Marks Of Second Subject=";
	cin>>h;
	cout<<"\n\n";
	test t;
	t.get(f);
	t.get_marks(g,h);
	t.put();
	t.put_marks();
	cout<<"\n";
	t.result();
	getch();
	return 0;
}