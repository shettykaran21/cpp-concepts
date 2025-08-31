#include <bits/stdc++.h>

using namespace std;

class Complex {
   private:
    int real;
    int img;

   public:
    Complex() {}
    Complex(int real, int img) {
        this->real = real;
        this->img = img;
    }

    int getReal() { return this->real; }
    int getImg() { return this->img; }

    Complex add(Complex &c) {
        Complex temp;
        temp.real = this->real + c.real;
        temp.img = this->img + c.img;
        return temp;
    }

    // Operator overloading
    // Just changed the named of the function from 'add' to 'operator+'
    /*
    Complex operator+(Complex &c) {
        Complex temp;
        temp.real = this->real + c.real;
        temp.img = this->img + c.img;
        return temp;
    }
    */

    // Friend operator overloading
    // Declared here; definition is outside the class.
    friend Complex operator+(Complex &c1, Complex &c2);

    // Friend operator overloading - Stream output: lets us do `cout << c;`
    friend ostream &operator<<(ostream &o, Complex &c);
};

// '+' definition: add corresponding parts and return a new Complex
Complex operator+(Complex &c1, Complex &c2) {
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}

// '<<' definition: print as "a +i b"
ostream &operator<<(ostream &o, Complex &c) {
    o << c.real << " +i" << c.img << '\n';
    return o;
}

int main() {
    Complex c1(3, 7);
    Complex c2(5, 4);

    // Using the named method
    Complex c3 = c1.add(c2);

    cout << c3;

    // Using the operator (more natural syntax)
    // Equivalent to c1.operator+(c2) if you enable the member version
    Complex c4 = c1 + c2;

    cout << c4;

    return 0;
}