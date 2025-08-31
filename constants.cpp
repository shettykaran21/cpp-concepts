#include <bits/stdc++.h>

using namespace std;

/*
    ┌───────────────────────────────────┬───────────────┬───────────────┐
    │ Declaration                       │ Pointer fixed? │ Pointee fixed? │
    ├───────────────────────────────────┼───────────────┼───────────────┤
    │ int* ptr                          │ No            │ No            │
    │ const int* ptr / int const* ptr   │ No            │ Yes           │
    │ int* const ptr                    │ Yes           │ No            │
    │ const int* const ptr              │ Yes           │ Yes           │
    └───────────────────────────────────┴───────────────┴───────────────┘

    Trick:
    Read form right to left
    - int const* ptr => pointer to constant integer
    - int* const ptr = > constant pointer to integer
    - const int* const ptr => constant pointer to constant integer

*/

// Constant integer
void constant_integer() {
    const int x = 10;
    // x++; // ❌ not allowed: x is const
}

// Pointer to constant integer
void pointer_to_constant_integer() {
    int x = 10;

    const int* ptr = &x;   // can re-point ptr
    int const* ptr2 = &x;  // same as above

    // *ptr = 8;  // ❌

    int y = 20;
    ptr = &y;  // ✅
}

void constant_pointer_to_integer() {
    int x = 5;

    int* const ptr = &x;

    *ptr = 7;  // ✅

    int y = 20;
    // ptr = &y;  // ❌
}

void constant_pointer_to_constant_integer() {
    const int x = 10;

    const int* const ptr = &x;

    // *ptr = 8;  // ❌
    // int y = 20; ptr = &y;  // ❌
}

int main() {
    return 0;
}