/*
CH08-320143
a4 p6.cpp
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <iostream>
#include "Access.h"

using namespace std;

int main(){
	Access obj;
	unsigned int c;

	obj.activate(1234, 1);
	obj.activate(9876, 5);
	obj.activate(9999, 9);

	cin >> c;

	while(!obj.isactive(c, 5)){
		cout << "Door did not open successfully." << endl;
		cin >> c;
	}

	obj.deactivate(c);
	obj.activate(9999, 8);
	obj.activate(1111, 7);

	cin >> c;

	while(!obj.isactive(c, 7)){
		cout << "Door did not open successfully." << endl;
		cin >> c;
	}
	return 0;
}