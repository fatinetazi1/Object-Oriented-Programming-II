/*
CH08-320143
a5 p2.cpp
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <iostream>
#include <exception>
#include <algorithm>

using namespace std;

class OwnException {
	private:
		string s;
	public:
		const char *what() throw() {
			return "OwnException\n";
		};
		OwnException() {};
		OwnException(string str) {
			s = str;
		};
		virtual ~OwnException() {};
};

void mfunction(int n){
	switch(n){
		case 1:
			throw 'a';
			break;
		case 2:
			throw 12;
			break;
		case 3:
			throw true;
			break;
		default: 
			throw OwnException("Default case exception");
			break;
	}
}

int main(){
	try {
		mfunction(1);
	}

	catch(const char a){
		cerr << "Caught in main: " << a << endl;
	}

	try {
		mfunction(2);
	}

	catch(const int a){
		cerr << "Caught in main: " << a << endl;
	}

	try {
		mfunction(3);
	}

	catch(const bool a){
		cerr << "Caught in main: " << a << endl;
	}

	try {
		mfunction(4);
	}

	catch(OwnException a){
		cerr << a.what();
	}
	return 0;
}