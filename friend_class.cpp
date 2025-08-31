#include <bits/stdc++.h>

using namespace std;

/*
    Friend class in C++:

    - If class A declares class B as a friend,
      then ALL member functions of B can access private/protected members of A.

    - This is different from declaring a single friend function:
      here the entire class gets access.
*/

class Your;

class My {
   private:
    int a = 10;

    friend class Your;
};

// class Your is a friend of My. Therefore, it can access all members of My.
class Your {
   public:
    void disp(My& m) {
        cout << m.a << '\n';
    }
};

int main() {
    My m;

    Your y;
    y.disp(m);

    return 0;
}