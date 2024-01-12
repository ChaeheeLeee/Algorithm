#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	int i = 0;

	while (i<100) {
		getline(cin, s);
		cout << s << endl;

		i++;
	}
	
}