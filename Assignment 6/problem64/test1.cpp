#include <iostream>
#include <string>
#include <algorithm>
#include <exception>
#include <sstream>
#include "Fraction.h"

using namespace std;

int main(){

	bool result;

	try{
        Fraction a(1,2);
        cout << a;
    }
    catch(string& str){
        cout << str << endl;
    }
    try{
        Fraction b(3,4);
        cout << b;
    }
    catch(string& str){
        cout << str << endl;
    }
    try{
    	Fraction help;
        Fraction c(help);
        cout << c;
    }
    catch(string& str){
        cout << str << endl;
    }
    try{
        Fraction d("1/2");
        cout << d;
    }
    catch(string& str){
        cout << str << endl;
    }

    try{
    	Fraction help;
    	Fraction f = help;
    	cout << f;
    }
    catch(string& str){
        cout << str << endl;
    }

	return 0;
}