#include <bits/stdc++.h>

using namespace std;

int max(int x, int y) {
    return x > y ? x : y;
}

int min(int x, int y) {
    return x < y ? x : y;
}

int main() {
    // Just learn this syntax 🤷🏻‍♂️
    // As the types of both functions are same, the pointer 'fp' can point to both 'max' and 'min functions
    int (*fp)(int, int);

    fp = max;
    (*fp)(10, 15);  // max is called

    fp = min;
    (*fp)(10, 15);  // min is called

    return 0;
}