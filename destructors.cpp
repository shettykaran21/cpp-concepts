#include <bits/stdc++.h>

using namespace std;

class Test {
    int* p;

    Test() {
        p = new int[5];
    }

    ~Test() {
        delete[] p;
    }
};

/* ---------------------------------------------------------------------------------- */
/* --------------------------- Destructors in inheritance --------------------------- */
/* ---------------------------------------------------------------------------------- */

class Base {
   public:
    Base() { cout << "Base constructor" << '\n'; }
    virtual ~Base() { cout << "Base destructor" << '\n'; }
};

class Derived : public Base {
   public:
    Derived() { cout << "Derived constructor" << '\n'; }
    ~Derived() { cout << "Derived destructor" << '\n'; }
};

/* --------------------------- Virtual destructors --------------------------- */

int main() {
    // Derived d;
    /*
        Base constructor
        Derived constructor
        Derived destructor
        Base destructor
    */

    Base* p = new Derived();
    delete p;
    /*
        Base constructor
        Derived constructor
        Derived destructor   <-- runs because Base::~Base is virtual
        Base destructor
    */

    // If Base::~Base were NOT virtual, the output would be:
    /*
        Base constructor
        Derived constructor
        Base destructor     <-- Derived destructor would NOT run (resource leak/UB risk)
    */

    return 0;
}