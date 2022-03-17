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
shopping-list

Given a vector of ﬂoats representing the prices of various shopping goods and another vector of floats representing the percent discount of each of those goods, return the total price of the shopping trip after applying the discount to each item.

For example: 
> 5
> 25.43 43.22 23.42 42.09 25.7
> 5
> 0.0 0.0 0.0 0.0 0.0
159.86

> 1
> 50.0
> 1
> 10.0
45.0

> 20
> 5.73 5.73 5.73 5.73 5.73 5.73 5.73 5.73 5.73 5.73 5.73 5.73 5.73 5.73 5.73 5.73 5.73 5.73 5.73 5.73
> 20
> 59.19 91.24 25.93 16.18 24.65 61.96 67.91 43.87 36.23 34.3 96.27 69.25 73.78 0.52 8.91 39.18 79.67 64.22 14.15 52.44
59.6

> 1
> 50.0
> 1
> 100.0
0.0

> 10
> 9.99 9.99 9.99 9.99 9.99 9.99 9.99 9.99 9.99 9.99
> 10
> 33.65 33.65 33.65 33.65 33.65 33.65 33.65 33.65 33.65 33.65
66.28


*/

int main() {

	int n;
	cin >> n;
	vector<float> prices(n);
	for (int i = 0; i < n; i++) {
		cin >> prices[i];
	}
	int m;
	cin >> m;
	vector<float> discounts(m);
	for (int i = 0; i < m; i++) {
		cin >> discounts[i];
	}
	float total = 0;
	for (int i = 0; i < n; i++) {
		total += prices[i] * (1 - discounts[i] / 100);
	}
	cout << total;
	return 0;
}