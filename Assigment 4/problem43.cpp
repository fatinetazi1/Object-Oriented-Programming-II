/*
CH08-320143
a4 p3.cpp
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <iostream>
#include <algorithm>
#include <set>
#include <iterator>
#include <ctime>



using namespace std;

int main(){
	set<int> sint;
	multiset<int> msint;
	int input;
	while(1){
		cin >> input;
		if (input < 0){
			break;
		}
		sint.insert(input);
		msint.insert(input);
	}
	
	set<int>::const_iterator i;
	for (i = sint.begin(); i != sint.end(); ++i){
		cout << *i << " ";
	}
	cout << endl;
	cout << endl;

	multiset<int>::const_iterator j;
	for (j = msint.begin(); j != msint.end(); ++j){
		cout << *j << " ";
	}
	cout << endl;
	cout << endl;

	sint.erase(5);
	msint.erase(5);

	for (i = sint.begin(); i != sint.end(); ++i){
		cout << *i << " ";
	}
	cout << endl;
	cout << endl;

	for (j = msint.begin(); j != msint.end(); ++j){
		cout << *j << " ";
	}
	cout << endl;
	cout << endl;

	sint.insert(14);
	sint.insert(198);

	multiset<int> un;
	multiset<int>::const_iterator k;
	set_union(sint.begin(), sint.end(), msint.begin(), msint.end(), inserter(un, un.begin()));

	cout << "Union" << endl;
	for (k = un.begin(); k != un.end(); ++k){
		cout << *k << " ";
	}
	cout << endl;
	cout << endl;

	set<int> in;
	set<int>::const_iterator x;
	set_intersection(sint.begin(), sint.end(), msint.begin(), msint.end(), inserter(in, in.begin()));

	cout << "Intersection" << endl;
	for (x = in.begin(); x != in.end(); ++x){
		cout << *x << " ";
	}
	cout << endl;
	cout << endl;

	set<int> dif;
	set<int>::const_iterator d;
	set_difference(sint.begin(), sint.end(), msint.begin(), msint.end(), inserter(dif, dif.begin()));

	cout << "Difference" << endl;
	for (d = dif.begin(); d != dif.end(); ++d){
		cout << *d << " ";
	}
	cout << endl;
	cout << endl;

	set<int> sdif;
	set<int>::const_iterator s;
	set_symmetric_difference(sint.begin(), sint.end(), msint.begin(), msint.end(), inserter(sdif, sdif.begin()));

	cout << "Symmetric Difference" << endl;
	for (s = sdif.begin(); s != sdif.end(); ++s){
		cout << *s << " ";
	}
	cout << endl;
	cout << endl;


	return 0;
}