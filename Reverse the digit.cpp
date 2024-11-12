#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int rem;
    int sum = 0;
    
    while (n != 0) {
        rem = n % 10;       // Get the last digit
        sum = sum * 10 + rem; // Build the reversed number
        n = n / 10;          // Remove the last digit from n
    }
    
    cout << "Reversed number: " << sum << endl;

    return 0;
}
