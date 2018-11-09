/*
CH08-320143
a4 p2.cpp
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <iostream>
#include <algorithm>
#include <set>
#include <ctime>



using namespace std;

int main(){
	srand(time(0));
	set<int> sint;
	while(sint.size() < 6){
		int random = rand() % 49 + 1;
		sint.insert(random);
	}

	//elements in a set are already sorted 
	//according to their values
	
	set<int>::const_iterator i;
	for (i = sint.begin(); i != sint.end(); ++i){
		cout << *i << " ";
	}
	cout << endl;
	return 0;
}