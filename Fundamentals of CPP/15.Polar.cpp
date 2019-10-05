#include<iostream.h>
#include<conio.h>
#include<math.h>
class polar
{
	double radius,angle;
	double getx()
	{
		return(radius*cos(angle));
	}
	double gety()
	{
		return(radius*sin(angle));
	}
	public:
	polar()
	{
		radius=0.0;
		angle=0.0;
	}
	polar(float r,float a)
	{
		radius=r;
		angle=a;
	}
	void display()
	{
		cout<<"Radius="<<radius<<"\n";
		cout<<"Angle="<<angle<<"\n\n";
	}
	polar operator+(polar p)
	{
		double x=getx()+p.getx();
		double y=gety()+p.gety();
		double r=sqrt(x*x+y*y);
		double a=tan(y/x);
		return polar(r,a);
	}
};
	int main()
	{
		polar p1(10.0,0.0);
		polar p2(10.0,1.570);
		polar p3;
		clrscr();
		p3=p1+p2;
		cout<<"\t\t\t--:Adding Two Polar Numbers:--\n";
		cout<<"p1:\n";p1.display();
		cout<<"p2:\n";p2.display();
		cout<<"p3:\n";p3.display();
		getch();
		return 0;
	}