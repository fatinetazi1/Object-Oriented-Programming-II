/*
CH08-320143
a3 p6.cpp
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <functional>
#include <queue>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;



class LessThan {
public:
	bool operator()(const int a, const int b) const {
		return a < b;
	}
};

void print(priority_queue<int, vector<int>, LessThan> q)
{
  while (!q.empty())
  {
    cout << q.top() << " ";
    q.pop();
  }
  std::cout << std::endl;
}

int main()
{
	priority_queue<int, vector<int>, LessThan> m;

	int array[6] = {1,2,3,4,5,6};
	for (int i = 0; i < 6; ++i) {
		m.push(array[i]);
	}

	print(m);

	return 0;
}