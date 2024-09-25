#include<bits/stdc++.h>
using namespace std;

int main() {
    int num, temp, ans = 0;
    
    
    cout << "Enter the number: ";
    cin >> num;
    
    temp = num;
    
    // Reverse the number
    while(temp != 0) {
        int rem = temp % 10;
        ans = ans * 10 + rem;
        temp = temp / 10;  
    }
    
    // Check if the number is palindrome
    if(ans == num) {
        cout << "Number is palindrome" << endl;
    } else {
        cout << "Number is not palindrome" << endl;
    }
    
    return 0;
}
