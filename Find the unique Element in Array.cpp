#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
   
   cout<<"enter the array element : ";
   int arr[100];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   
    int ans=0;
   for(int i=0;i<n;i++){
        ans=ans^arr[i];
   }
   
   cout<<"unique number is = "<<ans;

}
