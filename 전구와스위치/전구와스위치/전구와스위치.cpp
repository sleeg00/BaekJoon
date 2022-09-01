#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n,x,y;
int hap = 0;
vector<vector<int>> v;

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> x >> y;
		v[y].push_back(x);
	}
	for (int i = 1; i <= n; i++)
	{
		sort(v[i].begin(), v[i].end());
	}
	for (int i = 1; i <= n; i++)
	{
		hap += v[i][0];
	}
}