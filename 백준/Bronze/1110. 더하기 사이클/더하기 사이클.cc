#include <iostream>
#include <string>

using namespace std;

int main() {
	int N;
	int A = 0;
	int B = 0;
	int i = 0;

	cin >> N;
	B = N;
	do {
		A = B / 10 + B % 10;
		B = A % 10 + (B % 10)*10;
		i++;
	} while (B != N);

	cout << i;

	return 0;
}