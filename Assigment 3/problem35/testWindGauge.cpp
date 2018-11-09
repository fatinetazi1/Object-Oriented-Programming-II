/*
CH08-320143
a3 p5.cpp
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <iostream>
#include "WindGauge.h"

using namespace std;

int main(){
	WindGauge obj;

	obj.currentWindSpeed(15);
	obj.currentWindSpeed(16);
	obj.currentWindSpeed(12);
	obj.currentWindSpeed(15);
	obj.currentWindSpeed(15);

	obj.dump();

	obj.currentWindSpeed(16);
	obj.currentWindSpeed(17);
	obj.currentWindSpeed(16);
	obj.currentWindSpeed(16);
	obj.currentWindSpeed(20);
	obj.currentWindSpeed(17);
	obj.currentWindSpeed(16);
	obj.currentWindSpeed(15);
	obj.currentWindSpeed(16);
	obj.currentWindSpeed(20);

	obj.dump();

	return 0;
}