#include<iostream>
using namespace std;
int main()
{
	int num,rev=0,rem;
	cout<<"Enter Number";	
	cin>>num;
	while(num!=0)
	{
		rem=num%10;
		num=num/10;
		rev=rev*10+rem;	
	}
	cout<<"Reverse is "<<rev;
}
