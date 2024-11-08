// what is fibanaci number 
//previous two number sum =sum

#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int n;
    cout<<"Enter the number n = ";
    cin>>n;
    
    int first =0 , second = 1, third;
    cout<< first<< " "<< second;
    for(int i=2;i<n;i++){
       third= first+second;
       cout<<" "<< third;
       first= second;
       second= third;
        
    }
    // cout<<"fibonacci number is "<<second;
}


// ager only sequnce find kerna h 8 ka kya hoga
// chnage here it lop <=n tk chailega or dont print first and second first in last second
