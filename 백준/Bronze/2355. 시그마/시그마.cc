#include <iostream>

using namespace std;

int main() {
	long long A, B;

	cin >> A >> B;

	if (A <= B)
		cout << (B*(B+1) - A*(A-1)) / 2;
	else
		cout << (A*(A+1) - B*(B-1)) / 2;
}