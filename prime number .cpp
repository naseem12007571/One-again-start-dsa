// the prime number is that who are divide by itself or one 
// like so we check the number start from 2 to n-1 tk 
//ager en ki bich ke koi bhi value number cut deti h not prime eexam 10/2 10/5 se not prime
// 7/2 not cut so its prime 

// n<2 meian check negative number prime nhi 1 not prime zero not prime 

#include<bits/stdc++.h>
using namespace std;
int main()

{
    int n;
    cout<<"ENter the number is check prime or not ";
    cin>>n;
    
    if(n<2){
        cout<<"not a prime number ";
        return 0;    // ye esliye likha ager mera n 2 se chota h to progam yahi end karo next check mt karo
    }
    
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"Not a prime ";
            return 0;
        }
    }
    
    cout<<"number is prime";
    
}

// return 0 we use becase progam is end here if condition is true next print na ho 
