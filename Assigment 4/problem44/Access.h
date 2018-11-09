/*
CH08-320143
a4 p4.cpp
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <iostream>
#include <set>
#include <algorithm>

using namespace std;
 
#ifndef _ACCESS_H
#define _ACCESS_H

class Access {
	public:
		void activate(unsigned int c);
		void deactivate(unsigned int c);
		bool isactive(unsigned int c) const;
	private:
		// add properties and/or method(s) if necessary
		set<int> codes;
};

#endif