#include<iostream.h>
#include<conio.h>
class base
{
	public:
	void display()
	{
		cout<<"\nDisplay Base Class";
	}
	virtual void show()
	{
		cout<<"\nShow Base Class";
	}
};
	class derived:public base
	{
		public:
		void display()
		{
			cout<<"\nDisplay Derived Class";
		}
		void show()
		{
			cout<<"\nShow Derived Class";
		}
	};
int main()
{
	base b;
	derived d;
	base *ptr;
	clrscr();
	cout<<"\t\t\t--:Virtual Function:--";
	cout<<"When Pointer Points To Base Class\n";
	ptr=&b;
	ptr->display();
	ptr->show();
	cout<<"\n\nWhen Pointer Points To Derived Class\n";
	ptr=&d;
	ptr->display();		//Calls Base Class Function
	ptr->show();		//Calls Derived Class Function
	getch();
	return 0;
}