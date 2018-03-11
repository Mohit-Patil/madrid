#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int num,origin,arm=0,rem,count=0;
	cout<<"Enter Number ";	
	cin>>num;
	origin=num;
	while(num!=0)
	{
		num=num/10;
		count++;
	}
	//cout<<count<<"\n";
	num=origin;
	while(num!=0)
	{
		rem=num%10;
		num=num/10;
		arm=arm+pow(rem,count);
	}
	if(arm==origin)
		cout<<"Number is an armstrong number";
	else
		cout<<"Number is not an armstrong number";
}
