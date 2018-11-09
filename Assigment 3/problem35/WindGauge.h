/*
CH08-320143
a3 p5.cpp
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

#ifndef _WINDGAUGE_H
#define _WINDGAUGE_H

class WindGauge {
	public:
		WindGauge(int p = 12);
		void currentWindSpeed(int s);
		int highest() const;
		int lowest() const;
		int average() const;
		void dump();
	private:
	// add properties and/or method(s) here
		int period; // how much history is retained by obj
		int counter; 
		deque<int> history; // speed history
};

#endif