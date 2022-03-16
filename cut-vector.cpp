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
cut-vector

Given a vector of positive integers, ﬁnd the spot where, if you cut the vector, the numbers on both sides are either equal, or the diﬀerence is as small as possible. Return the two resulting subvectors as two outputs.

For example: 
> 2
> 2 129
1
2
1
129

> 1
> 100
1
100
0


> 1
> 0
1
0
0


> 1
> 1000
1
1000
0


> 2
> 9879 9950
1
9879
1
9950


*/

int main() {

	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	int min_diff = INT_MAX;
	int min_diff_left = 0;
	int min_diff_right = 0;
	int left = 0;
	int right = n - 1;
	while (left < right) {
		int diff = v[right] - v[left];
		if (diff < min_diff) {
			min_diff = diff;
			min_diff_left = left;
			min_diff_right = right;
		}
		if (v[right] > v[left]) {
			left++;
		} else {
			right--;
		}
	}
	cout << min_diff_left + 1 << endl;
	cout << v[min_diff_left] << endl;
	cout << min_diff_right + 1 << endl;
	cout << v[min_diff_right] << endl;
	return 0;
}