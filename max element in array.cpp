#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[10] = {10, 23, 4, 55, 22, 2}; // Initializing with some values
    int n = 6; // Number of elements initialized
    int max = arr[0];
    
    for (int i = 1; i < n; i++) {  // Start from 1, as max is already initialized with arr[0]
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << max;
    
    return 0;
}
