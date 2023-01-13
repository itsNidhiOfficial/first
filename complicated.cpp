#include<iostream>
using namespace std;
class public A
{
	public:
		int x;
		protected:
			void show()
			{
				x=10;
				cout<<"X="<<x<<endl;
			}
		
};
class public B:Public Public A
{
	public:
		int y;
		void show()
		{
			y=20;
			cout<<"	Y="<<y<<endl;
		}
};
void main()
{
	clrscr();
	Public B.obj;
	obj.show();
	obj.show1();
	getch();
}
