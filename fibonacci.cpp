#include<iostream>
using namespace std;
int main()
{
	cout<<"0\t1";
	int i=0,j=1;
	while(i<200)
	{
		int sum=i+j;
		cout<<"\t"<<sum;
		i=j;
		j=sum;
	}
}
