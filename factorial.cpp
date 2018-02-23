#include<iostream>
using namespace std;
int main()
{
	int no,fact=1;
	cout<<"Enter Number";
	cin>>no;
	while(no>0){
		fact=fact*no;
		no--;
	}

	cout<<"Factorial is :"<<fact;
}
