#include<iostream.h>
#include<conio.h>
class number
{
	static int n;
	public:
	number()
	{
		n++;
		cout<<"Number Of Objects Created:"<<n<<"\n";
	}
	~number()
	{
		cout<<"Number Of Objects Destroyed:"<<n<<"\n";
		n--;
	}
};
	int main()
	{
		number u,m,b,e,r;
		clrscr();
		cout<<"\t\t\t--:Creating And Destroying Objects:--\n";
		{
			number g;
		}
		getch();
		return 0
	}