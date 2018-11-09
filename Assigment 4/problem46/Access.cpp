/*
CH08-320143
a4 p6.cpp
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <iostream>
#include <map>
#include <algorithm>
#include "Access.h"
 
using namespace std;

void Access::activate(unsigned int code, unsigned int level){
	codes.insert(pair<int, int>(code, level));
}

void Access::deactivate(unsigned int code){
	codes.erase(code);
}

bool Access::isactive(unsigned int code, unsigned int level) const{
	bool result = true;
	map<int, int>::const_iterator i = codes.find(code);
	unsigned int l = i->second;
	if (i == codes.end()){
		result = false;
	} else if (level > l) {
		result = false;
	}
	return result;
}