#include <algorithm>
#include <iostream>
using namespace std;

int a[100001];
int n;
int main()
{
	cin >> n;
	a[1] = 3;
	a[2] = 7;
	for (int i = 3; i <=n; i++)
	{
		a[i] = a[i - 1] * 2 + a[i-2];
		a[i] %= 9901;
	}
	cout << a[n];
}