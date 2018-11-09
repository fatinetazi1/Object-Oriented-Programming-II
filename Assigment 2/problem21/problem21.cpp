/*
CH08-320143
problem 2.1.cpp
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <iostream>
#include "Complex.h"

using namespace std;

template <class X> int array_search(X array[], int size, X elm){
	int result;
	for (int i = 0; i < size; ++i){
		if (array[i] == elm){
			result = i;
			break;
		} else {
			result = -1;
		}
	}
	return result;
};
 
int main(int argc, char** argv){ 
	int iarray[] = {1, 2, 3, 4, 5, 6};
	cout << array_search<int>(iarray, 6, 2) << endl;

	double darray[] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6};
	cout << array_search<double>(darray, 6, 2.2) << endl;

	string sarray[] = {"apple", "cherry", "orange"};
	cout << array_search<string>(sarray, 3, "cherry") << endl; 

	Complex carray[] = {Complex(1, 2), Complex(3, 4), Complex(-3, -5)};
	cout << array_search(carray, 3, Complex(5,7)) << endl;

	return 0;
}
