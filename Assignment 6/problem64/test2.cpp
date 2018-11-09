#include <iostream>
#include <string>
#include <algorithm>
#include <exception>
#include <sstream>
#include "Fraction.h"

using namespace std;

int main(){

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