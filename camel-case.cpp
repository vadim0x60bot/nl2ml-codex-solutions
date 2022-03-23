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
camel-case

Take a string in kebab-case and convert all of the words to camelCase. Each group of words to convert is delimited by "-", and each grouping is separated by a space. For example: "camel-case example-test-string"-> "camelCase exampleTestString".

For example: 
> two words
two words

> all-one-word-dashed
allOneWordDashed

> loooooong wooooords
loooooong wooooords

> saaaaaaaaaaaaaaaaame
saaaaaaaaaaaaaaaaame

> all separate words
all separate words


*/

int main() {

	string s;
	cin >> s;
	int n = s.length();
	int i = 0;
	while (i < n) {
		if (s[i] == '-') {
			s[i + 1] = toupper(s[i + 1]);
			i++;
		}
		i++;
	}
	cout << s << endl;
	return 0;
}