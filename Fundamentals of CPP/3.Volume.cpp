#include<iostream.h>
#include<conio.h>
class volume
{
	float e,r,h;
	public:
	void vol(float);
	void vol(float,float);
	void vol(float,float,float);
};
	void volume::vol(float e)
	{
		float c;
		c=e*e*e;
		cout<<"Volume Of Cube="<<c<<"cb cm"<<"\n\n";
	}
	void volume::vol(float r,float h)
	{
		float c;
		c=3.14*r*r*h;
		cout<<"Volume Of Cylinder="<<c<<"cb cm"<<"\n\n";
	}
	void volume::vol(float e,float r,float h)
	{
		float c;
		c=e*r*h;
		cout<<"Volume Of Cuboid="<<c<<"cb cm"<<"\n\n";
	}
int main()
{
	volume v;
	int choice;
	float a,b,c;
	char code;
	clrscr();
	cout<<"\t\t\t--:Volume Of Geometrical Shapes:--";
	start:
	cout<<"1-Volume Of Cube\n";
	cout<<"2-Volume Of Cylinder\n";
	cout<<"3-Volume Of Cuboid\n";
	cout<<"Enter Choice=";
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<"\nEnter Edge Of Cube=";
			cin>>a;
			v.vol(a);
		break;
		case 2:
			cout<<"\nEnter Radius Of Cylinder=";
			cin>>a;
			cout<<"\nEnter Height Of Cylinder=";
			cin>>b;
			v.vol(a,b);
		break;
		case 3:
			cout<<"\nEnter Length Of Cuboid=";
			cin>>a;
			cout<<"\nEnter Breadth Of Cuboid =";
			cin>>b;
			cout<<"\nEnter Height Of Cuboid=";
			cin>>c
			v.vol(a,b,c);
		break;
		default:
			cout<<"Enter Right Choice\n\n";
	}
	cout<<"Want To Continue:\n";
	cout<<"Press Y/N";
	code=getche();
	if(code=='y'||code=='Y')
	{
		cout<<"\n\n";
		goto start;
	}
	getch();
	return 0;
}