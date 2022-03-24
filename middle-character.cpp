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
middle-character

Given a string, return the middle character as a string if it is odd length; return the two middle characters as a string if it is even length.

For example: 
> testing
t

> )b
)b

> Q
Q

> OGD
G

> DOG
O


*/

int main() {

	string s;
	getline(cin, s);
	int l = s.length();
	if (l % 2 == 0) {
		s = s.substr(l / 2 - 1, 2);
	}
	else {
		s = s.substr(l / 2, 1);
	}
	cout << s << endl;
	return 0;
}