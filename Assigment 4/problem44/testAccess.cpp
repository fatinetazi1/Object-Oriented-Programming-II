/*
CH08-320143
a4 p4.cpp
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <iostream>
#include "Access.h"

using namespace std;

int main(){
	Access obj;
	unsigned int c;

	obj.activate(1234);
	obj.activate(9876);
	obj.activate(9999);

	cin >> c;

	while(!obj.isactive(c)){
		cout << "Door did not open successfully." << endl;
		cin >> c;
	}

	obj.deactivate(c);
	obj.deactivate(9999);
	obj.activate(1111);

	cin >> c;

	while(!obj.isactive(c)){
		cout << "Door did not open successfully." << endl;
		cin >> c;
	}
	return 0;
}