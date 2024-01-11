#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int s[9]; //아홉난쟁이
	int Sum = 0;
	int a, b;


	for (int i = 0; i < 9; i++) {
		cin >> s[i];
		Sum += s[i];
	}

	//두 난쟁이 a, b 골라내기
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (i != j) {
				if ((Sum - s[i] - s[j]) == 100) {
					a = i;
					b = j;
					break;
				}
			}
		}
	}

	s[a] = 0;
	s[b] = 0;
	sort(s, s+9);

	//키 출력
	for (int i = 0; (i < 9) ; i++) {
		if(s[i] != 0) cout << s[i] << "\n";
	}


}