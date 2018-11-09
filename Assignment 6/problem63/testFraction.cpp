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

    result = e_2 < e_1;
    cout << result << endl;
    result = e_5 <= e_4;
    cout << result << endl;
    result = e_1 > e_2;
    cout << result << endl;
    result = e_4 >= e_5;
    cout << result << endl;
    result = e_1 == e_4;
    cout << result << endl;
    result = e_3 != e_4;
    cout << result << endl;

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
    
    try{
        Fraction g("2/0");
    }
    catch(string& str){
        cout << str << endl;
    }
    try{
        Fraction h(2,0);
    }
    catch(string& str){
        cout << str << endl;
    }

    try{
    	Fraction i;
    	cin >> i;
    	cout << i;
    }
    catch(string& str){
        cout << str << endl;
    }
    

	return 0;
}