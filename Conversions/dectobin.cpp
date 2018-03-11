#include<iostream>
using namespace std;
int main()
{
	int num,bin[100],i;
	cout<<"Enter Number";
	cin>>num;	
	cout<<"Decimal to binary conversion is: ";
	i=0;
	while(num>0)
	{	
		bin[i]=num%2;	
		num=num/2;
		i++;
	}
	
	while(i--)
		cout<<bin[i];
}
	
