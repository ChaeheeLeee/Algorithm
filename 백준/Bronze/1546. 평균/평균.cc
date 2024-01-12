#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	int N;
	double sum = 0;
	cin >> N;

	double arr[1000];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + N);

	for (int i = 0; i < N; i++) {
		sum = sum + (arr[i] / arr[N - 1]) * 100;
	}

	cout << sum / N;
	return 0;
}