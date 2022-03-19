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
bowling

Given a string representing the individual bowls in a 10-frame round of 10 pin bowling, return the score of that round.

For example: 
> --------------------
0

> 532/4362X179-41447/5
100

> ----------3/--------
10

> XXXXX----------
120

> XXXXXXXXXXXX
300


*/

int main() {

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		int score = 0;
		int frame = 0;
		int first = 0;
		int second = 0;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == 'X') {
				score += 10;
				frame++;
				first = 0;
				second = 0;
			}
			else if (s[i] == '/') {
				score += 10 - first;
				frame++;
				first = 0;
				second = 0;
			}
			else if (s[i] == '-') {
				score += 0;
				frame++;
				first = 0;
				second = 0;
			}
			else {
				score += s[i] - '0';
				first += s[i] - '0';
				if (second == 0) {
					second = first;
					first = 0;
				}
			}
			if (frame == 10) {
				break;
			}
		}
		cout << score << endl;
	}
	return 0;
}