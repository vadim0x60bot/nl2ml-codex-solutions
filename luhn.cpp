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
luhn

Given a vector of 16 digits, implement Luhn’s algorithm to verify a credit card number, such that it follows the following rules: double every other digit starting with the second digit. If any of the results are over 9, subtract 9 from them. Return the sum of all of the new digits.

For example: 
> 16
> 8 0 0 0 0 6 0 0 0 0 9 0 0 0 0 0
22

> 16
> 0 1 2 3 4 5 6 7 8 9 8 7 6 5 4 3
80

> 16
> 0 0 0 0 0 0 0 0 4 0 0 0 0 0 0 0
8

> 16
> 0 0 2 0 0 0 4 0 0 0 0 0 1 0 0 0
14

> 16
> 0 6 0 0 0 0 0 0 0 0 0 0 0 0 0 0
6


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
		if (i % 2 == 0) {
			sum += v[i];
		} else {
			if (v[i] * 2 > 9) {
				sum += v[i] * 2 - 9;
			} else {
				sum += v[i] * 2;
			}
		}
	}
	cout << sum << endl;
	return 0;
}