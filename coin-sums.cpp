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
coin-sums

Given a number of cents, ﬁnd the fewest number of US coins (pennies, nickles, dimes, quarters) needed to make that amount, and return the number of each type of coin as a separate output.

For example: 
> 17
2
1
1
0

> 13
3
0
1
0

> 35
0
0
1
1

> 20
0
0
2
0

> 21
1
0
2
0


*/

int main() {

	int n;
	cin >> n;
	int cnt = 0;
	int q = n / 25;
	n = n % 25;
	cnt += q;
	int d = n / 10;
	n = n % 10;
	cnt += d;
	int nn = n / 5;
	n = n % 5;
	cnt += nn;
	cnt += n;
	cout << cnt << endl;
	cout << q << endl;
	cout << d << endl;
	cout << nn << endl;
	cout << n << endl;
	return 0;
}