#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter Total steps";
	cin>>num;
	int x,y;
	cout<<"Enter Day and Night steps";
	cin>>x>>y;
	int i=0;
	int x1=x-y;
	while(((x1*i)+x)<num)
		i++;
	
	cout<<"No of days required:"<<i+1;
}
