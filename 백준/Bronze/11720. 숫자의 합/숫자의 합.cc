#include <iostream>
#include <string>

using namespace std;

int main() {
	int N, B;
	string str;
	int sum = 0;

	cin >> N;
	cin >> str;

	for (int i = 0; i < N; i++) {
		sum += str[i] - '0';
	}

	cout << sum ;

}