#include<iostream>
using namespace std;
int main()
{
	int i,j,r1,r2;
	cout<<"Enter Range between which prime numbers are to be found out";
	cin>>r1>>r2;
	for(i=r1;i<r2;i++)
	{
		for(j=i/2;j!=1;j--)
		{
			if(i%j==0)
				break;
		}
		if(j==1)
		cout<<"\n"<<i;
	}		
	
}
	
