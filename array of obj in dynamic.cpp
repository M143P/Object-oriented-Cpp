#include<iostream>
using namespace std;
class a
{
	public:
		int b;
		a()
		{
			cout<<"enter the values";
			cin>>b;
			
		}
		~a()
		{
			cout<<"obj.destructor";
		}
		void print(){
			cout<<b;
		}
};
int main(){
	int i,n;
	cout<<"c";
	cout<<n;
	a*p=new a[n];
	for(i=0;i<n;i++)
	{
		(p+i)->print();
		delete []p;
	}
}
