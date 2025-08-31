#include <bits/stdc++.h>

using namespace std;

/*
    Function pointers in C++

    - A function pointer can store the address of a function.
    - Syntax:
        return_type (*pointer_name)(parameter_types);
    - The pointer can then be used to call the function, just like the function’s name.
*/

int max(int x, int y) {
    return x > y ? x : y;
}

int min(int x, int y) {
    return x < y ? x : y;
}

int main() {
    // Declare a function pointer 'fp' that can point to functions taking (int, int) → int
    int (*fp)(int, int);

    // Assign it to 'max'
    fp = max;
    cout << (*fp)(10, 15) << '\n';  // Calls max → prints 15

    // Reassign it to 'min'
    fp = min;
    cout << (*fp)(10, 15) << '\n';  // Calls min → prints 10

    return 0;
}
