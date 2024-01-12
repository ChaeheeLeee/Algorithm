#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main(){

    map<string, int> m;
    vector<int> f;
    int n;
    int cnt = 0;

    cin >> n;
    f.resize(n, 0);

    for (int i = 0; i < n; i++)
    {
        string name;
        cin >> name;
        m[name] = i;
    }
    for (int i = 0; i < n; i++)
    {
        string name;
        cin >> name;
        f[i] = m[name];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (f[i] > f[j])
            {
                cnt++;
                break;
            }
        }
    }
    cout << cnt;
}