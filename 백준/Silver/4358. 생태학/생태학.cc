#include <iostream>
#include <string>
#include <map>
#include<algorithm>

using namespace std;



int main(){
	map<string, double> a;

	cout << fixed;
	cout.precision(4);

	string wood;
	int all = 0;

	while (getline(cin, wood)) {
		a[wood]++;
		all++;
	}

	for (auto i = a.begin(); i != a.end(); i++) {
		cout << i->first << ' ' << i->second * 100 / (double)all << endl;
	}

}