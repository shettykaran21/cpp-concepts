#include <bits/stdc++.h>
using namespace std;

/*
    Friend functions in C++:

    - A friend function is NOT a member of the class,
      but it can access the class’s private and protected members.

    - Friend functions can be:
        1. A global (standalone) function.
        2. A member function of another class.

    - Declaring a function as 'friend' only gives it access privilege;
      it does not make it part of the class.
*/

/* ---------------- Global friend function example ---------------- */
class Test {
   private:
    int a;

   protected:
    int b;

   public:
    int c;

    // 'fun' is a global friend function
    friend void fun();
};

// Global function that can access Test's private/protected members
void fun() {
    Test t;
    t.a;  // accessible because of friendship
    t.b;  // accessible because of friendship
    t.c;  // always accessible (public)
}

/* ----------- Member function of another class as friend ----------- */
class Sample;

class Helper {
   public:
    void show(Sample &s);  // this will be made a friend of Sample
};

class Sample {
   private:
    int secret = 42;

   public:
    // Declaring only Helper::show as a friend (not the whole Helper class)
    friend void Helper::show(Sample &s);
};

void Helper::show(Sample &s) {
    // Accessing private member of Sample
    cout << "Sample's secret = " << s.secret << '\n';
}

int main() {
    // Global friend function example
    fun();

    // Member function of another class example
    Sample s;
    Helper h;
    h.show(s);  // prints: Sample's secret = 42

    return 0;
}
