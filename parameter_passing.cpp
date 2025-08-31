#include <bits/stdc++.h>

using namespace std;

void swap_pass_by_value(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void swap_pass_by_address(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap_pass_by_reference(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int& a;
int& b;

int main() {
    return 0;
}