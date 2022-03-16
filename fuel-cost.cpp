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
fuel-cost

Given a vector of positive integers, divide each by 3, round the result down to the nearest integer, and subtract 2. Return the sum of all of the new integers in the vector.

For example: 
> 20
> 9998 9998 9998 9998 9998 9998 9998 9998 9998 9998 9998 9998 9998 9998 9998 9998 9998 9998 9998 9998
66600

> 1
> 13
2

> 20
> 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8
0

> 20
> 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12
40

> 20
> 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13
40


*/

int main() {

	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += (v[i] / 3) - 2;
	}
	cout << sum;
	return 0;
}