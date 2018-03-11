#include<iostream>
using namespace std;
int main()
{
	int num,origin,rev=0,rem;
	cout<<"Enter Number";	
	cin>>num;
	origin=num;
	while(num!=0)
	{
		rem=num%10;
		num=num/10;
		rev=rev*10+rem;	
	}
	if(rev==origin)
		cout<<"\nNumber is a Palindrome Number";
	else
		cout<<"\nNumber is not a Palindrome Number";
}
