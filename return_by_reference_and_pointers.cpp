#include <bits/stdc++.h>

using namespace std;

int* return_address(int size) {
    // Create an array in heap and point the pointer 'p' to the array
    int* p = new int[size];

    // Update array elements
    for (int i = 0; i < size; ++i) {
        p[i] = i + 1;
    }

    // Return the pointer
    return p;
}

int& return_reference(int& a) {
    cout << a << '\n';
    return a;
}

int main() {
    /********* Return address *********/
    int* ptr = return_address(5);
    for (int i = 0; i < 5; ++i) {
        cout << ptr[i] << ' ';
    }
    cout << '\n';

    /********* Return reference *********/
    int x = 10;

    // function as l-value
    return_reference(x) = 25;
    cout << x << '\n';  // Prints 25

    return 0;
}