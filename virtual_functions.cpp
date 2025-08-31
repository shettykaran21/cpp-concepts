#include <bits/stdc++.h>

using namespace std;

/*
    Covered:
    1. Base class pointers pointing to derived objects (without virtual functions).
    2. How virtual functions enable runtime polymorphism.
*/

/* --------------------------- Base class pointer, Derived class object --------------------------- */

class Base {
   public:
    void fun1() { cout << "Base fun1" << '\n'; }
    void fun2() { cout << "Base fun2" << '\n'; }
    void fun3() { cout << "Base fun3" << '\n'; }
};

class Derived : public Base {
   public:
    void fun1() { cout << "Derived fun1" << '\n'; }
    void fun2() { cout << "Derived fun2" << '\n'; }
    void fun4() { cout << "Derived fun4" << '\n'; }
};

/*
   Notes:
   - A Base class pointer can point to a Derived object (since "Derived is a Base").
   - But without 'virtual', function calls are resolved at compile time (static binding).
   - This means calls are decided by the pointer type (Base), not the object type (Derived).
*/

/* --------------------------- Virtual Functions --------------------------- */

class Car {
   public:
    // Declaring 'virtual' makes this function dynamically bound.
    // Now the function to call is determined at runtime, based on the actual object.
    virtual void start() { cout << "Car started" << '\n'; }
};

class Defender : public Car {
   public:
    void start() { cout << "Defender started" << '\n'; }
};

class RangeRover : public Car {
   public:
    void start() { cout << "RangeRover started" << '\n'; }
};

/*
   Notes:
   - With 'virtual', we achieve runtime polymorphism.
   - Calls are resolved by the actual object type (Defender, RangeRover),
     not just the pointer type (Car).
*/

/* --------------------------- Pure Virtual Functions --------------------------- */

// Abstract base class: contains at least one pure virtual function
class Shape {
   public:
    // Pure virtual function → must be implemented by derived classes
    virtual void draw() = 0;

    // Virtual destructor (good practice)
    virtual ~Shape() = default;
};

class Circle : public Shape {
   public:
    void draw() override { cout << "Drawing Circle\n"; }
};

class Square : public Shape {
   public:
    void draw() override { cout << "Drawing Square\n"; }
};

int main() {
    // -------- Base pointer to Derived object (static binding) --------
    Base* p = new Derived();

    p->fun1();  // Calls Base::fun1 (because binding is static, decided by pointer type)
    p->fun2();  // Calls Base::fun2
    // p->fun4();  // ❌ Not accessible, since 'p' is a Base*

    // -------- Invalid case: Derived pointer to Base object --------
    // Derived* d = new Base();  // ❌ Error: "Base is not a Derived"
    // Explanation:
    //   A Derived object is guaranteed to contain all of Base,
    //   but a Base object is NOT guaranteed to contain Derived-specific members.

    // -------- Using virtual functions (dynamic binding) --------
    Car* my_car = new Defender();
    my_car->start();  // Calls Defender::start (resolved at runtime)

    my_car = new RangeRover();
    my_car->start();  // Calls RangeRover::start (resolved at runtime)

    // -------- Pure Virtual Function --------
    // Shape s; // ❌ cannot instantiate abstract class
    Shape* s1 = new Circle();
    Shape* s2 = new Square();

    s1->draw();  // Drawing Circle
    s2->draw();  // Drawing Square

    delete s1;
    delete s2;

    return 0;
}
