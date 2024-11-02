#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int n;
    cout<<"ENTER THE size of array n = ";
    cin>>n;
    
    int arr[100];
    cout<<"Enter the array element ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int start =0;
    int end= n-1;
    
    while(start<=end){
        swap(arr[start],arr[end]);
        start++,end--;
    }
    
    
    cout<<"Reverse the Array element here = ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
