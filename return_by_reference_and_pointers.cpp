#include <bits/stdc++.h>

using namespace std;

/*
    Returning by address (pointer) vs Returning by reference:

    - Return by address:
        • Function returns a pointer to dynamically allocated memory (heap).
        • Caller receives the pointer and must manage (delete[]) it to avoid memory leaks.
        • Useful when the size is not known at compile time and dynamic allocation is required.

    - Return by reference:
        • Function returns an alias (reference) to an existing variable.
        • Caller can both read and modify the original variable through this reference.
        • Must not return reference to a local (automatic) variable → leads to undefined behavior.
*/

int* return_address(int size) {
    // Allocate array in heap → persists after function returns
    int* p = new int[size];

    // Initialize elements
    for (int i = 0; i < size; ++i) {
        p[i] = i + 1;
    }

    return p;  // Safe: memory lives on heap
}

int& return_reference(int& a) {
    // Prints current value
    cout << a << '\n';
    return a;  // Safe: reference to parameter 'a' (lives in caller's scope)
}

int main() {
    /********* Return by address *********/
    int* ptr = return_address(5);

    // Use the returned pointer
    for (int i = 0; i < 5; ++i) {
        cout << ptr[i] << ' ';
    }
    cout << '\n';

    // Important: free the allocated memory to prevent memory leak
    delete[] ptr;

    /********* Return by reference *********/
    int x = 10;

    // Function returns reference, so it can be used as an l-value
    return_reference(x) = 25;  // Equivalent to x = 25
    cout << x << '\n';         // Prints 25

    return 0;
}
