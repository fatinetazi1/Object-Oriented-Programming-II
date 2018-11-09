/*
CH08-320143
a4 p6.cpp
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <iostream>
#include <map>
#include <algorithm>

using namespace std;
 
#ifndef _ACCESS_H
#define _ACCESS_H

class Access {
	public:
		void activate(unsigned int code, unsigned int level);
		void deactivate(unsigned int code);
		bool isactive(unsigned int code, unsigned int level) const;
	private:
		// add properties and/or method(s) if necessary
		map<int, int> codes;
};

#endif