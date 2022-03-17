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
twitter

Given a string representing a tweet, validate whether the tweet meets Twitter’s original character requirements. If the tweet has more than 140 characters, return the string "Too many characters". If the tweet is empty, return the string "You didn't type anything". Otherwise, return "Your tweet has X characters", where the X is the number of characters in the tweet.

For example: 
> 1
Your tweet has 1 characters

> 
You didn't type anything

> 40172875*&(&(%^^*!@&#()!@&^(*$787031264123984721-43214876*%^#!(@^$_!@^%#$(!#@%$(01234~~``)
Your tweet has 90 characters

> Tooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooolong1
Too many characters

> (@)&#N)&#@!M#&17t8023n217830123bn6 BN23780BC3879N01nc3n473N962n9768062BC3718N396b21v8365n9072B638705b097B6*&b%&%b(*B5*&%b7%(*vb&V8%v&(85V80%0857(%v97%(*&%v87c%&*c ()0*^c%08v^mN098)vf%9P8V6TfB97b99870)
Too many characters


*/

int main() {

	string tweet;
	cin >> tweet;
	if (tweet.length() > 140) {
		cout << "Too many characters" << endl;
	}
	else if (tweet.length() == 0) {
		cout << "You didn't type anything" << endl;
	}
	else {
		cout << "Your tweet has " << tweet.length() << " characters" << endl;
	}
	return 0;
}