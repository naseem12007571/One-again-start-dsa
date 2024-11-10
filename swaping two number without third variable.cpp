#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int a=10,b=20,c;
    // c=a;
    // a=b;
    // b=c;
    // cout<<"a "<<a<<" "<<"b "<<b;
    
    
    // without third varibale how we can do it 
    
    cout<<"before swaping value is = " <<a<< " "<<b<<endl;
    a=a+b;      //a= 30 
    b=a-b;      //b= 30-20 to bacha b=10
    a=a-b;      //a=  30-10  to  a 20 bachega
    
    cout<<"after swaping value is = "<<a<<" "<<b;
    
}
