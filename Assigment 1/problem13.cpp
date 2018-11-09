/*
CH08-320143
problem 1.3.cpp
Fatine Tazi
f.tazi@jacobs-university.de

Explanation:
The error was that A acted as an indirect base class multiple times.
Therefore, members of that class were included multiple times, as well.
One way to remove the ambiguousness is by declaring a base class a virtual.
When declaring a base class as virtual, only one subobject will be created.

*/

#include<iostream>
using namespace std;
 
class A {
 	int x;
	public:
	  void setX(int i) {x = i;}
	  void print() { cout << x; }
};
 
class B: public virtual A {
	public:
	  B()  { setX(10); }
};
 
class C:  public virtual A {
	public:
	  C()  { setX(20); }
};
 
class D: public B, public C {
};
 
int main() {
    D d;
    d.print();
    return 0;
}