#include<iostream>
using namespace std;
int main()
{
    int i,sum=0,num=0;
    cout<<"Enter 5 Numbers"<<endl;
    for(i=0;i<5;i++)
    {
        cin>>num;
        sum=sum+num;
    }
    cout<<"The Sum is "<<sum;
    return 0;
}