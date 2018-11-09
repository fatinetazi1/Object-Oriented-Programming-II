/*
CH08-320143
problem 1.4.cpp
Fatine Tazi
f.tazi@jacobs-university.de

Explanation:
The error results from the fact that there is no default constructor 
for the class D. Since print() comes from class A, print() is called 
on a D object, and everything is related in a class-subclass relationship, 
the object D first goes through class C and class B and then reaches class
class A. However, which A does the complier use, from class B or class D? 
Again, the ambigiousness can be removed by simply adding a default 
constructor that initializes A directly, so we won't have to go through 
classes B and C. 

*/

#include<iostream>
using namespace std;
 
class A{
	int x;
	public:
		A(int i) { x = i; }
		void print() { cout << x; }
};
 
class B: virtual public A{
	public:
		B():A(10) {  }
};
 
class C:  virtual public A {
	public:
		C():A(10) {  }
};
 
class D: public B, public C {
	public: 
		D(): A(10) { }
};
 
int main(){
    D d;
    d.print();
    return 0;
}