/*
CH08-320143
a5 p1.cpp
Fatine Tazi
f.tazi@jacobs-university.de
*/
 
#include <iostream>
#include <vector>
#include <exception>
#include <stdexcept>
 
using namespace std;
 
int main(){
    vector<int> vint; 
    for (int i = 0; i < 20; ++i) {
        vint.push_back(8);
    }
 
    try {
        vint.at(21);
        throw "Error!";
    }
 
    catch(const out_of_range error) {
        cerr << "Exception: " << error.what() << endl;
        return 1;
    }
    return 0;
}