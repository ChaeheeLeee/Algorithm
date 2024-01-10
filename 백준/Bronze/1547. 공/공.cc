#include <iostream>
#include <string>
using namespace std;

void Swap(int& a, int& b) {
	int t;
	t = a;
	a = b;
	b = t;
}
int main() {
	int a, b, M;
	int Cup[3] = { 1, 2, 3 };
	int Change1 = 0;
	int Change2 = 0;
	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> a >> b;

		for(int j = 0; j < 3; j++){
			if (Cup[j] == a) Change1 = j;
			if (Cup[j] == b) Change2 = j;
		}

		Swap(Cup[Change1], Cup[Change2]);
	}
	
	cout << Cup[0];
}