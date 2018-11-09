/*
CH08-320143
problem 2.2.cpp
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <iostream>
#include <string>
#include "Stack.h"

using namespace std;

int main(int argc, char** argv){ 
	Stack<int> s;
	for (int i = 0; i < 11; ++i){
		s.push(1);
	}
	for (int i = 0; i < 11; ++i){
		s.pop(i);
	}

	s.push(25);
	s.push(35);
	int x = s.back();
	cout << x << endl;
	int y = s.getNumEntries();
	cout << y << endl;
	return 0;
}