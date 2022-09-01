#include <algorithm>
#include <iostream>

using namespace std;

int hap = 1, hap2 = 1, n, m;
int main()
{
	cin >> n >> m;

	for (int i = 1; i <= n; i++)
		hap *= i;
	for (int i = 1; i <= n - m; i++)
		hap2 *= i;
	for (int i = 1; i <= m; i++)
		hap2 *= i;
	cout << hap / hap2;
}