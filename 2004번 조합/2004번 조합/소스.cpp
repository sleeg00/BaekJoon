#include <algorithm>
#include <iostream>
using namespace std;

long long d2(long long n)
{
	long long cnt = 0;
	for (long long i = 2; i <= n; i *= 2)
		cnt += n / i;
	return cnt;
}
long long d5(long long n)
{
	long long cnt = 0;
	for (long long i = 5; i <= n; i *= 5)
		cnt += n / i;
	return cnt;
}
int main()
{
	int n, m;
	cin >> n >> m;


	cout << min(d5(n) - d5(m) - d5(n - m),
		d2(n) - d2(m) - d2(n - m));
}