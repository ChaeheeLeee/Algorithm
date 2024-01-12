#include <iostream>
using namespace std;

int main() {

	int count[10] = {};
	int a, b, c;

	cin >> a >> b >> c;

	int r = a * b * c;

	while (r != 0) {
		count[r % 10]++;
		r /= 10;
	}

	for (int v : count) {
		cout << v << "\n";
	}

	return 0;
}