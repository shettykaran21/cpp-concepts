#include <bits/stdc++.h>
using namespace std;

/*
    Static variables in a class:

    - A static data member is shared by ALL objects of the class.
    - Only one copy exists in memory (not per object).
    - Lifetime: entire program (like a global), but scope: class.
    - Must be defined outside the class once (storage allocation).
*/

class Test {
   private:
    int a;
    int b;

   public:
    // Static variable: shared across all objects
    static int count;

    // Inline static variable -- allowed C++17 onwards
    inline static int count2 = 0;

    Test() {
        this->a = 10;
        this->b = 20;

        // incremented each time an object is created
        count++;
        count2++;
    }
};

// Definition (storage) of static variable outside the class
int Test::count = 0;

int main() {
    Test t1;

    // Accessed via object (not recommended style)
    cout << "count: " << t1.count << '\n';
    cout << "count2: " << t1.count2 << '\n';

    Test t2;
    Test t3;

    // Accessed via class (preferred)
    cout << "count: " << Test::count << '\n';
    cout << "count2: " << Test::count2 << '\n';

    return 0;
}
