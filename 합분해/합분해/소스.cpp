#include <iostream>
#include <algorithm>
using namespace std;

int n,m;
int dp[201][201];
int main()
{
	cin >> n >> m;
	dp[0][0] = 1;



	for (int i = 1; i <= m; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			for (int w = 0; w <= j; w++)
			{
				dp[i][j] += dp[i - 1][j - w];
				dp[i][j] %= 1000000000;
			}
		}
	}
	cout <<dp[m][n] << endl;

	return 0;
}