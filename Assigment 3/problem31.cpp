/*
CH08-320143
a3 p1.cpp
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	string input;
	vector<string> vstring;

	while(input != "END"){
		cin >> input;
		vstring.push_back(input);
	}

	int size = vstring.size() - 1;

	for (int i = 0; i < size; ++i){
		cout << vstring[i] << " ";
	}
	cout << endl;

	for (vector<string>::const_iterator i = vstring.begin(); i != vstring.end() - 1; ++i){
		if (i != vstring.end() - 2){
			cout << *i << ", ";
		} else {
			cout << *i;
		}
	}
	cout << endl;

	return 0;
}