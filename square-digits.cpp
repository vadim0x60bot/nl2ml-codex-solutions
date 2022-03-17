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
square-digits

Given a positive integer, square each digit and concatenate the squares into a returned string.

For example: 
> 408
16064

> 57
2549

> 794
498116

> 100
100

> 0
0


*/

int main() {

	int n;
	cin >> n;
	string s = to_string(n);
	string res = "";
	for (int i = 0; i < s.size(); i++) {
		int num = s[i] - '0';
		res += to_string(num * num);
	}
	cout << res << endl;
	return 0;
}