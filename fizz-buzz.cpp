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
fizz-buzz

Given an integer x, return "Fizz" if x is divisible by 3, "Buzz" if x is divisible by 5, "FizzBuzz" if xis divisible by 3 and 5, and a string version of x if none of the above hold.

For example: 
> 1
1

> 17
17

> 20
Buzz

> 4
4

> 50000
Buzz


*/

int main() {

	int x;
	cin >> x;
	if (x % 3 == 0 && x % 5 == 0) {
		cout << "FizzBuzz";
	}
	else if (x % 3 == 0) {
		cout << "Fizz";
	}
	else if (x % 5 == 0) {
		cout << "Buzz";
	}
	else {
		cout << x;
	}
	return 0;
}