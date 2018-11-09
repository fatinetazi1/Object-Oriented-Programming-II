/*
CH08-320143
problem 1.2.cpp
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main(){
	char buf[1];
	char nl = '\n';
	string file;
	int n;
	cin >> n;
	ofstream output("concatn.txt", ios::out | ios::binary);
	if(!output.good()){
		exit(1);
	}

	for (int i = 0; i < n; ++i){
		cin >> file;

		ifstream input(file.c_str(), ios::in | ios::binary);
		if (!input.good()){
			exit(1);
		}

		while(1){
			input.read(buf, 1);
			if (input.eof()){
				break;
			}
			output.write(buf, 1);
		}
		output.write(&nl, 1);
		cout << endl;
	}
	output.close();

	return 0;
}