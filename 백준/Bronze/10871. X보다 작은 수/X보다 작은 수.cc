#include <iostream>
#include <string>

using namespace std;

int main() {
	int N, X;
	int A[100000];

	cin >> N >> X;

	for (int i = 0; i < N; i++) {
		cin >> A[i];
		if (X > A[i]) cout << A[i] <<" ";
	}

}