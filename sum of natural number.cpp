#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of n ";
    cin>>n;
    
    int sum=0;
    for(int i=0;i<=n;i++){
        sum=sum+i;
    }
    cout<<" sum of natural number is = " <<sum;
}
