#include <iostream>
#include <algorithm>

using namespace std;
int n, Max, Min;
int arr[1001];
int dp[1001];

int main() {

    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    dp[0] = 0;
    dp[1] = 0;

    dp[2] = abs(arr[2] - arr[1]);

    for (int i = 3; i <= n; i++) {
        Max = arr[i];
        Min = arr[i];

        for (int j = i - 1; j >= 0; j--) {
            Max = max(Max, arr[j + 1]);
            Min = min(Min, arr[j + 1]);
            dp[i] = max(dp[i], dp[j] + Max - Min);
        }
    }
    cout << dp[n] << '\n';
    return 0;
}