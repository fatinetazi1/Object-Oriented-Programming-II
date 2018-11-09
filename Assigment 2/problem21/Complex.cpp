/*
CH08-320143
problem 2.1.cpp
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <iostream>
#include <cmath>                      
#include "Complex.h"
 
using namespace std;  

Complex::Complex() {  
    real = imag = 0;
    cout << "Constructor one is being called" << endl;
}
 
Complex::Complex(float r, float i) {  
    real = r;
    imag = i;
    cout << "Constructor two is being called" << endl;
}
 
Complex::Complex(const Complex &c) {  
    cout << "Constructor three is being called" << endl;
}
 
Complex::~Complex(){
 
}
 
void Complex::setReal(float newreal) {
    real = newreal;
}
 
void Complex::setImag(float newimag) {
    imag = newimag;
}
 
float Complex::getReal() {
    return real;
}
 
float Complex::getImag() {
    return imag;
}
  
double Complex::magnitude() {         
    return sqrt(real * real + imag * imag);
}
 
Complex Complex::conjugation(){
    Complex conjugation(real, -imag);
    return conjugation;
}
 
Complex Complex::add(Complex &a){
    float r; 
    float i;
    r = real + a.getReal();
    i = imag + a.getImag();
    Complex add(r, i);
    return add;
}
 
Complex Complex::sub(Complex &a){
    float r; 
    float i;
    r = real - a.getReal();
    i = imag - a.getImag();
    Complex sub(r, i);
    return sub;
}
 
Complex Complex::mult(Complex &a){
    float r; 
    float i;
    r = (real * a.getReal()) - (imag * a.getImag());
    i = (imag * a.getReal()) + (real * a.getImag());
    Complex mult(r, i);
    return mult;
}
 
/*void Complex::print() {               // prints data to screen via cout
    if (imag) {
        cout << noshowpos << real << showpos << imag << "i" << endl;
    } else {
        cout << noshowpos << real << showpos << endl;
    }
 
}*/

ostream& operator<<(ostream& out, const Complex& c){
    if (c.imag) {
        out << noshowpos << c.real << showpos << c.imag << "i" << endl;
    } else {
        out << noshowpos << c.real << showpos << endl;
    }
    return out;
}

istream& operator>>(istream& in, Complex& c){
    in >> c.real >> c.imag;
    return in;
}

Complex Complex::operator+(const Complex& c){
    Complex r;
    r.real = this->real + c.real;
    r.imag = this->imag + c.imag;
    return r;
}
Complex Complex::operator-(const Complex& c){
    Complex r;
    r.real = this->real - c.real;
    r.imag = this->imag - c.imag;
    return r;
}

Complex Complex::operator*(const Complex& c){
    Complex r;
    r.real = this->real * c.real - this->imag * c.imag;
    r.imag = this->imag * c.real - this->real * c.imag;
    return r;
}
Complex& Complex::operator=(const Complex& c){
    this->real = c.real;
    this->imag = c.imag;
    return *this;
}

bool Complex::operator==(const Complex& c){
    return this-> real == c.real && this->imag == c.imag;
}
