#include <iostream>
#include <stack>
using namespace std;
int main() {
	int num = 1;
	while (true)
	{
		int open = 0, close = 0, sum = 0;
		stack<char>s;
		string str;
		cin >> str;
		if (str[0] == '-')
		{
			break;
		}
		for (auto c : str)
		{
			if (c == '{')
			{
				s.push(c);
			}
			else if (c == '}') {
				if (!(s.empty()) && s.top() == '{')
				{
					s.pop();
				}
				else
					s.push(c);
			}


		}
		while (s.size() != 0)
		{
			if (!(s.empty()) && s.top() == '{') {
				open++;
				s.pop();
			}
			else {
				close++;
				s.pop();
			}
		}
		if (open % 2 == 1)
		{
			sum += (open / 2) + (close / 2) + 2;
		}
		else {
			sum += (open / 2) + (close / 2);
		}
		cout << num << ". " << sum << "\n";
		num++;
	}


}