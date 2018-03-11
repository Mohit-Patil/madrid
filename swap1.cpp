#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter Two Numbers to swap";
	cin>>a>>b;
	cout<<"\nNumbers before swapping are: "<<a<<"\t"<<b;
	c=a;
	a=b;
	b=c;
	cout<<"\nSwapped Numbers are: "<<a<<"\t"<<b;
}
