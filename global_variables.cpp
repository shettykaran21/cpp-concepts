#include <bits/stdc++.h>

using namespace std;

// Global variables are stored in a subsection of the code section and are accessible to all functions
int x = 10;

void fun() {
    int a = 5;
    x = x + a;
    cout << x << ' ';
}

int main() {
    int a = 10;
    fun();
    fun();
    fun();

    cout << "\nFinal value:" << x << '\n';

    return 0;
}