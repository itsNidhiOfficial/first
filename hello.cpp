#include <iostream>
using namespace std;
class A
{
	public:
		string name;
		void secA()
		{
			 namecout<<"OOPS Programing"<<name<<endl;
			 
		}
};
class B:public A
{
	public:
		int rno;
		void secB()
		{
			rno=65;
			cout<<"OOPS Programing"<<rno<<endl;
					}
};
int main()
B b1;
b1.secA();
b1.secB();
  return 0;
};
