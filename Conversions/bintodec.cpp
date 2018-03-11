#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int num,i=0,rem,dec=0;
	cout<<"Enter Number";
	cin>>num;	
	cout<<"Binary to Decimal conversion is: ";
	while(num>0)
	{	
		if(num%10==1)															
			dec=dec+pow(2,i);
		num=num/10;
		i++;
	}
	cout<<dec;	
}
	
