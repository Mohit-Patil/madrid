#include <iostream>
using namespace std;

int main() {
    int num,count=0,compare=1,count1=0,count0=0;
    cout<<"Enter Decimal Number";
    cin>>num;
    int num1=num;
    while(num1)
    {
        count=count+1;
        num1=num1>>1;
    }
    
    while(count--)
    {
         if(num&compare)
         {
            count1=count1+1;
         }
        else
            count0=count0+1;
        compare=compare<<1;
     
    }
    cout<<"Number of 1's in the binary number"<<count1<<"\n";
    cout<<"Number of 0's in the binary number"<<count0<<"\n";

	return 0;
}
