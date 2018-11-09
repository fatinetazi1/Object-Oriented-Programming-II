/*
CH08-320143
problem 1.1.cpp
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include "Complex.h"
 
using namespace std;
 
int main(int argc, char** argv) {

    Complex c1, c2, c3;

    ifstream input1("in1.txt");
    if(!input1.is_open()){
        exit(1);
    }
    input1 >> c1;

    ifstream input2("in2.txt");
    if(!input2.is_open()){
        exit(1);
    }
    input2 >> c2;

    c3 = c1 + c2;
    cout << c1 << c2 << c3 << c1*c2;

    ofstream output("output.txt");
    if(!output.is_open()){
        exit(1);
    }
    output << c1*c2;

    input1.close();
    input2.close();
    output.close();
 
    return 0;
}