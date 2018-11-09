/*
CH08-320143
a3 p3.cpp
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <iostream>
#include <fstream>
#include <list>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main(){
	int input;
	list<int> A;
	list<int> B;

	while(1){
		cin >> input;
		if(input < 1){
			break;
		}
		A.push_back(input);
		B.push_front(input);
	}

	list<int>::const_iterator i;

	for (i = A.begin(); i != A.end(); ++i){
		cout << *i << " ";
	}
	cout << endl;

	ofstream out("listB.txt", ios::out|ios::binary); 		
	if (!out.good()) {
		cerr << "Error opening output file" << endl;
		exit(3);
	}

	for (i = B.begin(); i != B.end(); ++i){
		out << *i << " ";
	}
	out << endl;
	out.close();

	cout << endl;

	A.splice(A.end(), A, A.begin());
	B.splice(B.end(), B, B.begin());

	for (i = A.begin(); i != A.end(); ++i){
		if (i != --A.end()){
			cout << *i << ", ";
		} else {
			cout << *i;
		}
	}
	cout << endl;

	for (i = B.begin(); i != B.end(); ++i){
		if (i != --B.end()){
			cout << *i << ", ";
		} else {
			cout << *i;
		}
	}
	cout << endl;
	cout << endl;

	A.merge(B);
	A.sort();

	for (i = A.begin(); i != A.end(); ++i){
		cout << *i << " ";
	}
	cout << endl;
	

	return 0;
}