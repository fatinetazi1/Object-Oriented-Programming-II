/*
CH08-320143
a4 p4.cpp
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <iostream>
#include <set>
#include <algorithm>
#include "Access.h"
 
using namespace std;

void Access::activate(unsigned int c){
	codes.insert(c);
}

void Access::deactivate(unsigned int c){
	codes.erase(c);
}

bool Access::isactive(unsigned int c) const{
	bool result = true;
	set<int>::const_iterator i;
	i = codes.find(c);
	if (i == codes.end()){
		result = false;
	} 
	return result;
}