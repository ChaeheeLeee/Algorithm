#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
	string s;
	int count = 0;
	while (1) {
		cin >> s;
		if (s == "0") break;
		for (int i = 0; i < s.size() / 2; i++) {
			if (s[i] == s[s.size() - 1 - i]) {
				count++;
			}
		}
		if (count == s.size() / 2) cout << "yes\n";
		else cout << "no\n";
		count = 0;
	}

}