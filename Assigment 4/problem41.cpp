/*
CH08-320143
a4 p1.cpp
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int main(){
	vector<int> vint;
	for (int i = 1; i <= 30; ++i){
		vint.push_back(i);
	}
	vint.push_back(5);
	reverse(vint.begin(), vint.end());
	vector<int>::const_iterator i;
	for (i = vint.begin(); i != vint.end(); ++i){
		cout << *i << " ";
	}
	cout << endl;
	replace(vint.begin(), vint.end(), 5, 129);
	for (i = vint.begin(); i != vint.end(); ++i){
		cout << *i << " ";
	}
	cout << endl;
	return 0;
}