#include <algorithm>
#include <iostream>
using namespace std;

int n,i=0,hap;
int a[1001];

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a, a + n);
	
	if (n == 1)
	{
		cout << 1;
		return 0;
	}
	hap = 0;
	while (i<n)
	{
		if (hap + 1 < a[i])
		{
			break;
		}
		hap += a[i];
		i++;
	}
	cout << hap + 1;
}