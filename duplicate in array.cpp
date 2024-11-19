#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number = ";
    cin>>n;
    
    int arr[100];
    
    cout<<"Enter the array element = ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"duplicate element is = ";
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cout<<arr[i]<<" ";
            }
        }
    }
   
    
}
