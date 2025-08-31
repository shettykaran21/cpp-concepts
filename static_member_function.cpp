#include <bits/stdc++.h>

using namespace std;

/*
    Static member functions:
        • Can only access static data members (no `this` pointer).
        • Can be called using either an object or the class name.
*/

class Rectangle {
   private:
    inline static int length = 10;
    inline static int breadth = 20;
    int a = 10;

   public:
    static void print() {
        cout << "Length: " << length << " | " << "Breadth: " << breadth << '\n';
        // cout << a;  // ❌ Error: static functions cannot access non-static members
    }
};

int main() {
    Rectangle r;
    r.print();  // call via object (allowed, but not recommended)

    Rectangle::print();  // call via class name (preferred style)

    return 0;
}