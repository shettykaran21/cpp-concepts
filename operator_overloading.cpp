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
    // Only function declaration here. Definition is outside the class
    friend Complex operator+(Complex &c1, Complex &c2);

    // Friend operator overloading - cout
    friend ostream &operator<<(ostream &o, Complex &c);
};

// Definition of '+'
Complex operator+(Complex &c1, Complex &c2) {
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}

// Definition of <<'
ostream &operator<<(ostream &o, Complex &c) {
    o << c.real << " +i" << c.img << '\n';
    return o;
}

int main() {
    Complex c1(3, 7);
    Complex c2(5, 4);
    Complex c3 = c1.add(c2);

    cout << c3;

    // Complex c4 = c1.operator+(c2);
    Complex c4 = c1 + c2;  // We can use '+' directly instead of 'operator+'

    cout << c4;

    return 0;
}