#include <iostream>

using namespace std;


int main() {
	int N, K;
	int count = 0;

	cin >> N;

	for (int i = 1; N > 0; i++) {
		if (N >= i) {
			N -= i;
			count++;
		}
		else {
			i = 1;
			N -= i;
			count++;
		}
	}
	cout << count;
		
}