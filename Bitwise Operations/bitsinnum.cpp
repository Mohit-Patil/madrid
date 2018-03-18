#include <iostream>
using namespace std;

int main() {
    int num,count=0;
    cout<<"Enter Decimal Number";
    cin>>num;
    while(num)
    {
        count=count+1;
        num=num>>1;
    }
    cout<<"\nNumber of bits are:"<<count;
	return 0;
}
