#include<iostream.h>
#include<conio.h>
class second;
class complex
{
	float x,y;
	public:
	complex()
	{
	
	}
	complex(float a)
	{
		x=y=a;
	}
	complex(float real,float imag)
	{
		x=real;
		y=imag;
	}
	friend complex sum(complex,complex);
	friend void show(complex);
};
	complex sum(complex a,complex b)
	{
		complex c;
		c.x=a.x+b.x;
		c.y=a.y+b.y;
		return(c);
	}
	void show(complex v)
	{
		cout<<v.x<<"+i"<<v.y;
	}
int main()
{
	float d,e,f;
	clrscr();
	cout<<"\t\t\t--:Sum Of Two Complex Numbers:--\n";
	cout<<"Enter First Complex Number\n";
	cout<<"Enter Real Part=";
	cin>>d;
	cout<<"Enter Imaginary Part=";
	cin>>e;
	cout<<"\n";
	cout<<"Enter Second Complex Number\n";
	cout<<"Enter Real Part=";
	cin>>f;
	complex a(d,e);
	complex b(f);
	complex s;
	s=sum(a,b);
	cout<<"\n\nSum Of Two Complex Numbers\n";
	show(s);
	getch();
	return 0;
}