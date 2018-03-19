#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int num1,num2,posi,bits,count1=0,count2=0;
	cout<<"Enter Two Numbers:";
	cin>>num1>>num2;
	cout<<"\nEnter Position of bits which you want to swap";
	cin>>posi;
	cout<<"\nEnter Number of bits you want to swap";
	cin>>bits;
	cout<<"\nNumbers Before Swapping the required bits:"<<num1<<"\t"<<num2;
	int req1=num1;
	while(req1)
	{
		count1++;
		req1=req1>>1;
	}
	int req2=num2;
	while(req2)
	{
		count2++;
		req2=req2>>1;
	}
	//cout<<count1<<count2;
	req1=pow(2,count1)-1;
	//cout<<req1<<endl;
	req2=pow(2,count2+1)-1;
	//cout<<req2;
	req1=num1^req1;	
	//cout<<req1;
	req2=num2^req2;
	int compare=pow(2,bits)-1;
	//cout<<compare;
	compare=compare<<(posi-bits);
	//cout<<compare;
	int temp1=num1^compare;
	int temp2=num2^compare;
	req1=temp1 & req1;
	req2=temp2 & req2;
	//cout<<req1<<"\n"<<req2;
	req1=req1^compare;
	req2=req2^compare;
	//cout<<req1<<"\n"<<req2;
	temp1=temp1&num1;
	temp2=temp2&num2;
	//cout<<temp1<<"\n"<<temp2;
	num1=temp1| req2;
	num2=temp2| req1;
	cout<<"\nNumbers After Swapping the required bits:"<<num1<<"\t"<<num2;
		
}
	
