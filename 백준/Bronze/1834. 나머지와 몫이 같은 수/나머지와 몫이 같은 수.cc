#include <iostream>

using namespace std;


int main() {
	long long N;
	long long i = 1;
	long long Sum = 0;

	cin >> N;
	while (i < N) {
		Sum += ((N*i) + i);
		i++;
	}
		

	cout << Sum;

}