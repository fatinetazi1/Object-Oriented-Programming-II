/*
CH08-320143
a6 p1.cpp
Fatine Tazi
f.tazi@jacobs-university.de

Explanation:
Complied using: g++ -g -o main problem61.cpp
Break point at main
The loop runs all the way to nr, 
which is not an index of the array, 
so a unknown value is added to s. 
For difference function, the function subtracts one
unsigned int from another. This caused one to become
"signed" and this is not allowed so you get weird values.
Instead use if(a < b)
*/

#include <iostream>
using namespace std;

int sum(int a[], int nr) {
	int s=0;
	for(int i=0; i<=nr; i++)
		s+=a[i];
	return s;
}

unsigned int difference(unsigned int a, unsigned int b) {
	cout << a-b << endl;
	if (a-b < 0)
		return b-a;
	else
		return a-b;
}

int main() {
	int n;
	cout << "n=";
	cin >> n;
	int v[n];
	cout << "Enter values for the array" << endl;
	for(int i=0; i<n; i++)
		cin >> v[i];
	int result = sum(v, n);
	cout << "Result=" << result << endl;
	int x, y;
	cout << "x=";
	cin >> x;
	cout << "y=";
	cin >> y;
	cout << "Difference=" << difference(x, y) << endl;
	return 0;
}