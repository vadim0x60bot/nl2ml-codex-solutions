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
find-pair

Given a vector of integers, return the two elements that sum to a target integer.

For example: 
> 3
> 1 3 5
> 6
1
5

> 2
> 8310 -8320
> -10
8310
-8320

> 3
> 237 410 -777
> -367
410
-777

> 3
> 9492 -3791 -7317
> -11108
-3791
-7317

> 2
> -5 -20
> -25
-5
-20


*/

int main() {

	int n;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		v.push_back(x);
	}
	int target;
	cin >> target;
	int i = 0;
	int j = v.size() - 1;
	while (i < j) {
		int sum = v[i] + v[j];
		if (sum == target) {
			cout << v[i] << endl;
			cout << v[j] << endl;
			return 0;
		}
		else if (sum < target) {
			i++;
		}
		else {
			j--;
		}
	}
	return 0;
}