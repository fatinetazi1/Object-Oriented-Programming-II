/*
CH08-320143
a3 p4.cpp
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <iostream>
#include <fstream>
#include <deque>
#include <algorithm>

using namespace std;

int main(){
	float input;
	deque<float> A;

	while(1){
		cin >> input;
		if(input == 0){
			break;
		}
		if (input > 0){
			A.push_back(input);
		} else {
			A.push_front(input);
		}
	}

	deque<float>::const_iterator i;

	for (i = A.begin(); i != A.end(); ++i){
		cout << *i << " ";
	}
	cout << endl;
	cout << endl;

	for (i = A.begin(); i != A.end(); ++i){
		if (*i > 0) {
			A.insert(i, 0);
			break; 
		}
	}

	for (i = A.begin(); i != A.end(); ++i){
		if (i != --A.end()){
			cout << *i << ", ";
		} else {
			cout << *i;
		}
	}
	cout << endl;

	return 0;
}