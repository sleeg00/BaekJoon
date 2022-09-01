#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, a[1001][1001];
int dp[1001][1001];
int gap[3];
int main()
{
	cin >> n;
    dp[0][0] = 0;
    dp[0][1] = 0;
    dp[0][2] = 0;
    for (int i = 1; i <= n; ++i)
    {
        cin >> gap[0] >> gap[1] >> gap[2];
        dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + gap[0];
        dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + gap[1];
        dp[i][2] = min(dp[i - 1][1], dp[i - 1][0]) + gap[2];
    }
    cout << min(dp[n][2], min(dp[n][0], dp[n][1]));
}