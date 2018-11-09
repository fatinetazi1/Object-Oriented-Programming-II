/*
CH08-320143
a3 p5.cpp
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <iostream>
#include <deque>
#include <algorithm>
#include "WindGauge.h"

using namespace std;

WindGauge::WindGauge(int p){
	period = p; 
}

void WindGauge::currentWindSpeed(int s){
	counter++;
	if(counter > period){
		history.pop_front();	
	} 
	history.push_back(s);
}

int WindGauge::highest() const {
	deque<int>::const_iterator i;
	int r = *history.begin();
	for (i = history.begin(); i != history.end(); ++i){
		 if (r < *i) {
		 	r = *i;
		 }
	}
	return r;
}

int WindGauge::lowest() const {
	deque<int>::const_iterator i;
	int r = *history.begin();
	for (i = history.begin(); i != history.end(); ++i){
		 if (r > *i) {
		 	r = *i;
		 }
	}
	return r;
}

int WindGauge::average() const {
	deque<int>::const_iterator i;
	int a = 0;
	for (i = history.begin(); i != history.end(); ++i){
		a += (*i);
	}
	if (counter > 12){
		a /= period;
	} else {
		a /= counter;
	}
	return a;
}

void WindGauge::dump(){
	cout << "Highest: " << highest() << endl;
	cout << "Lowest: " << lowest() << endl;
	cout << "Average: " << average() << endl;
}