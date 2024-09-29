#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array ";
    cin>>n;
     
    cout<<"Enter the array element= ";
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int start=0;
    int end=n-1;
    
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    cout<<"reveres element is = ";
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
