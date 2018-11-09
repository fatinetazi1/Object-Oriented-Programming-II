/*
CH08-320143
problem 1.1.cpp
Fatine Tazi
f.tazi@jacobs-university.de
*/
 
using namespace std;

#ifndef _COMPLEX_H
#define _COMPLEX_H

class Complex {
 
private:  
    float real;  
    float imag;  
 
public:
    // constructors
    Complex();                 
    Complex(float, float = 0); 
    Complex(const Complex &c);

    // destructor
    ~Complex(); 

    // setter
    void setReal(float newreal);
    void setImag(float newimag);

    // getters
    float getReal();
    float getImag();

    // service methods
    double magnitude();        
    Complex conjugation(); 
    Complex add(Complex &a); 
    Complex sub(Complex &a); 
    Complex mult(Complex &a); 

    // prints it to the screen
    void print();              

    // operator overload
    friend ostream& operator<<(ostream& out, const Complex& c);
    friend istream& operator>>(istream& in, Complex& c);
    Complex operator+(const Complex& c);
    Complex operator-(const Complex& c);
    Complex operator*(const Complex& c);
    Complex& operator=(const Complex& c);
};

#endif
