#include <bits/stdc++.h>

using namespace std;

/*
The only difference between Global and Static variables is 'Scope'. Both persist for the entire program run and are stored in the program's "data" segment.
- Global variables: Accessible from anywhere in the program.
- Static variables inside functions: Only accessible within the function where they are declared.
*/

void fun() {
    // Static variable defined inside function is accessible only inside the function
    static int v = 0;

    int a = 5;

    v++;

    cout << a << " " << v << '\n';
}

int main() {
    // Every time we call 'fun', the value of v changes and it persists.
    fun();
    fun();
    fun();

    return 0;
}