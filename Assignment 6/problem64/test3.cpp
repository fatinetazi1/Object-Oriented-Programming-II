#include <iostream>
#include <string>
#include <algorithm>
#include <exception>
#include <sstream>
#include "Fraction.h"

using namespace std;

int main(){

    Fraction e_1;
    cout << e_1;
    Fraction e_2(1, 2);
    cout << e_2;
    Fraction e_3("1/3");
    cout << e_3;
    Fraction e_4(e_1);
    cout << e_4;
    Fraction e_5 = e_2;
    cout << e_5;

    try{
    	Fraction add = e_1 + e_4;
    	cout << add;
    }
    catch(string& str){
        cout << str << endl;
    }
    try{
    	Fraction sub = e_1 - e_4;
    	cout << sub;
    }
    catch(string& str){
        cout << str << endl;
    }
    try{
    	Fraction mult = e_1 * e_3;
    	cout << mult;
    }
    catch(string& str){
        cout << str << endl;
    }
    try{
    	Fraction div = e_1 / e_5;
    	cout << div;
    }
    catch(string& str){
        cout << str << endl;
    }
    
	return 0;
}