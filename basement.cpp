using namespace std;
#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>

/*
basement

Given a vector of integers, return the ﬁrst index such that the sum of all integers from the start of the vector to that index (inclusive) is negative.

For example: 
> 20
> -10 -10 -10 -10 -10 -10 -10 -10 -10 -10 -10 -10 -10 -10 -10 -10 -10 -10 -10 -10
0

> 3
> 2 -2 -1
2

> 3
> 0 0 -1
2

> 3
> 100 -100 -100
2

> 20
> 1 2 3 4 5 6 7 8 9 -1 -2 -3 -4 -5 -6 -7 -8 -9 -10 10
18


*/

int main() {

	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	int sum = 0;
	int index = 0;
	for (int i = 0; i < n; i++) {
		sum += v[i];
		if (sum < 0) {
			index = i;
			break;
		}
	}
	cout << index;
	return 0;
}