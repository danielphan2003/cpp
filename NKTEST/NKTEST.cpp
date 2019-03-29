#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	freopen("NKTEST.INP", "r", stdin);
	freopen("NKTEST.OUT", "w", stdout);
	string s;
	long test = 1;
	while (true) {
		if (!(cin >> s))
			break;
		if (s == "IF")
			++test;
	}
	cout << test;
	return 0;
}