# Important cpp-concepts

## Basics

-   [Parameter passing](parameter_passing.cpp)
-   [Returning by Reference and Address](return_by_reference_and_pointers.cpp)
-   [Global Variables](global_variables.cpp)
-   [Static Variables in a function](static_variables_in_function.cpp)
-   [Pointer to function](pointer_to_function.cpp)

## Operator Overloading

-   [Operator Overloading](operator_overloading.cpp)

## Virual Functions

-   [Virtual Functions](virtual_functions.cpp)

## Friend functions & classes

-   [Friend Function](friend_function.cpp)
-   [Friend Class](friend_class.cpp)

## Static members of class

-   [Static variables (Static data members)](static_variables.cpp)
-   [Static member function](static_member_function.cpp)

## Constants

-   [Constants](constants.cpp)

---

# OOPs

## Abstraction

Hiding implementation details and showing only the necessary interface.

_Achieved in C++ using:_

-   Abstract classes (with pure virtual functions)
-   Interfaces (class with only pure virtual functions)

_Real-life example:_ A **coffee machine**: you only press a button (interface), you don’t know the internal heating, grinding, and pumping mechanisms.

## Encapsulation

Binding data and methods together inside a class and restricting direct access.

_Achieved in C++ using:_

-   Classes and objects
-   Access specifiers (`private`, `protected`, `public`)

_Real-life example:_ A **bank account**: you can deposit/withdraw using methods, but you cannot directly change the account balance variable.

## Inheritance

Creating new classes (derived) from existing ones (base) to enable code reuse.

_Achieved in C++ using:_

-   `:` syntax for inheritance (`class Derived : public Base`)
-   Modes: `public`, `protected`, `private` inheritance

_Real-life example:_ A **car** is a type of **vehicle**. It inherits common properties like wheels and engine, but can add its own specifics like air conditioning.

## Polymorphism

Same interface, different behavior. Two types in C++:

-   **Compile-time (static polymorphism):** Function overloading, operator overloading, templates
-   **Runtime (dynamic polymorphism):** Virtual functions, base class pointers/references, function overriding

_Real-life example:_ A **remote control**: the same "power" button behaves differently depending on whether it’s for a TV, AC, or music system.
