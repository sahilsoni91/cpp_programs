#include<iostream.h>
#include<conio.h>
class fact
{
	public:
	static void result();
};
	void fact::result()
	{
		int n,i;
		cout<<"\t\t\t--:Calculating Factorial";
		cout<<"Enter Number=";
		cin>>n;
		int f;
		f=1;
		for(i=1;i<=n;i++)
		{
			f=f*i;
		}
		cout<<"\nFactorial Of "<<n<<"="<<f;
	}
int main()
{
	clrscr();
	fact::result();
	getch();
	return 0;
}