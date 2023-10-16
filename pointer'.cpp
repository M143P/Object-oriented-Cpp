#include<iostream>
using namespace std;
class student
{
	public:
		int a;
		student()
		{
			a=1234;
		}
		void dsiplay()
		{
			cout<<a;
		}
};
int main()
{
	student A;
	student*p;
	p=&A;
	cout<<p->a;
}
