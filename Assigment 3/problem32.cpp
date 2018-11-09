/*
CH08-320143
a3 p2.cpp
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

	if(size > 3){
		swap(vstring[1], vstring[4]);
	} else {
		cout << "Elements not swapped." << endl;
	}

	string new_string = "???";
	//string old_string = *(vstring.end() - 1);
	string old_string = vstring[size-1];

	replace(vstring.begin(), vstring.end(), old_string, new_string);

	for (int i = 0; i < size; ++i){
		if (i != size - 1){
			cout << vstring[i] << ", ";
		} else {
			cout << vstring[i];
		}
		
	}
	cout << endl;

	for (vector<string>::const_iterator i = vstring.begin(); i != vstring.end() - 1; ++i){
		if (i != vstring.end() - 2){
			cout << *i << "; ";
		} else {
			cout << *i;
		}
	}
	cout << endl;

	reverse(vstring.begin(), vstring.end());

	for (vector<string>::const_iterator i = vstring.begin() + 1; i != vstring.end(); ++i){
		cout << *i << " ";
	}
	cout << endl;

	return 0;
}