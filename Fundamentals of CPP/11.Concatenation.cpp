#include<iostream.h>
#include<conio.h>
#include<string.h>
class string
{
	char *name;
	int length;
	public:
	string()
	{
		length=0;
		name=new char[length+1];
	}
	string(char *s)
	{
		length=strlen(s);
		name=new char[length+1];
		strcpy(name,s);
	}
	void display()
	{
		cout<<name<<"\n";
	}
	void join(string &a,string &b);
};
	void string::join(string &a,string &b)
	{
		length=a.length+b.length;
		delete name;
		name=new char[length+1];
		strcpy(name,a.name);
		strcat(name,b.name);
	}
int main()
{
	char *first="Sahil";
	clrscr();
	string one(first);
	string two("Soni");
	string s1;
	s1.join(one,two);
	cout<<"\t\t\t--:Concatenation Of Two Strings:--\n";
	cout<<"First String=";
	one.display();
	cout<<"Second String=";
	two.display();
	cout<<"\nString After Concatenation\n";
	s1.display();
	getch();
	return 0;
}