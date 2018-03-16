#include<iostream>
using namespace std;
int main()
{
    int rem,sum=0,i;
        string num;
    cout<<"Enter Number";
        cin>>num;
    int s[10]={6,2,5,5,4,5,6,3,7,6};
    for(i=0;num[i]!='\0';i++)
        {       
                int temp=num[i];
                sum=sum+s[temp-48]; //Conversion from ASCII
        }
       cout<<sum;
}  
