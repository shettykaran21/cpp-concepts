#include <bits/stdc++.h>

using namespace std;

/*
    Difference between Global and Static local variables:

    - Both have **static storage duration**:
        They are created once, live for the entire program, and are stored in the "data" segment.

    - Global variables:
        • Declared outside any function.
        • Accessible from anywhere in the program (global scope).

    - Static local variables:
        • Declared inside a function with 'static'.
        • Retain their value across multiple calls.
        • Accessible only within the function they are declared in (local scope).
*/

void fun() {
    // 'v' is initialized only once, persists across all calls to fun(), but is visible only inside fun().
    static int v = 0;

    // 'a' is a regular local variable (automatic storage).
    // It is created and destroyed each time the function is called.
    int a = 5;

    v++;

    cout << a << " " << v << '\n';
}

int main() {
    // Each call re-creates 'a' (always 5),
    // but 'v' is preserved and incremented because it is static.
    fun();  // prints: 5 1
    fun();  // prints: 5 2
    fun();  // prints: 5 3

    return 0;
}
