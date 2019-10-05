#include<iostream.h>
#include<conio.h>
class manager
{
	char name[20];
	int roll;
	float age;
	public:
	void get();
	void put();
};
	void manager::get()
	{
		cout<<"Enter Name: ";
		cin>>name;
		cout<<"Enter Roll No: ";
		cin>>roll;
		cout<<"Enter Age: ";
		cin>>age;
	}
	void manager::put()
	{
		cout<<roll<<"\t\t";
		cout<<name<<"\t\t";
		cout<<age<<"\t\t";
		cout<<"\n";
	}
	const int a=5;
int main()
{
	manager m[a];
	clrscr();
	cout<<"\t\t\t--:Entering And Displaying Detail Of Friends:--";
	for(int i=1;i<=a;i++)
	{
		cout<<"\nEnter Details:\n";
		m[i].get();
	}
	cout<<"\nDetail Of Members:\n\n";
	cout<<"Roll No\tName\t\tAge\n";
	for(int j=1;j<=a;j++)
	{
		m[j].put();
	}
	getch();
	return 0;
}