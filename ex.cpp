#include<iostream>
using namespace std;
int main()
{
	int a,b;
	try{
		cout<"enter a numbers:";
		cin>>a>>b;
		cout<<"before error"<<endl;
	
	if(b==0)
	{
		throw"divison by zero";
		cout<<"after throw"<<endl;
	}
	else{
		cout<<a/b<<endl;
	}
	}
	catch(char const*e){
		cout<<e;
	}
	cout<<"after catch"<<endl;
	return 0;
}
