#include<iostream>
using namespace std;
int main()
{
	int no,i;
	cout<<"\nEnter A number";
	cin>>no;
	for(i=no/2;i!=1;i--)
	{
		if(no%i==0)
		{
			cout<<"\nNumber is not prime";
			break;
		}	
	}
	if(i==1)
		cout<<"\nNumber is Prime";

}
