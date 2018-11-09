#include <iostream>
#include <string>
#include <algorithm>
#include <exception>
#include <sstream>
#include "Fraction.h"

using namespace std;

int main(){

	bool result;

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

	return 0;
}