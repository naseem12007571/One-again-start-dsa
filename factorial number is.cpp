#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int n;
    cout<<"Enter the number of n ";
    cin>>n;
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    
    cout<<"factorial number is = "<<fact;
}
