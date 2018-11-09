/*
CH08-320143
a4 p5.cpp
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <iostream>
#include <map>
#include <algorithm>
#include <fstream>


using namespace std;

int main(){
	string name;
	string date;
	map<string, string> database;

	ifstream input("data.txt");
    if(!input.is_open()){
        exit(1);
    }

    while(1){
    	getline(input, name, '\n');
    	getline(input, date, '\n');
    	database[name] = date;
    	if(input.eof()){
    		break;
    	}
    }

    map<string, string>::const_iterator i;
    while(1){
    	getline(cin, name, '\n');
    	i = database.find(name);
    	if(i == database.end()){
    		cout << "Name not found!" << endl;
    		break;
    	} else{
    		cout << database[name] << endl;
    		break;
    	}
    }

    input.close();
	return 0;
}
