#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int a[1000001];
int n,number;
int i = 0;
int b[100001];
int cnt = 1, hap = 0;
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> number;
		a[n - (i + 1) ]= number;
	}

	b[i] = a[i];
	i++;
	int im = 0;
	int sw = 1;
	while (i < n)
	{
		for (int j = i; j <= i + 1; j++)
		{
			if (cnt == 2)
			{
				b[sw] = b[sw - 1] + a[j+1];
				cnt = 1;
				break;
			}
			else if (b[sw] <= b[sw - 1] + a[j])
			{
				b[sw] = b[sw - 1] + a[j];
				im = j - i;
			}
		}
		sw++;
		if (im == 0)
			cnt = 2;
		else if (im == 1)
		{
			cnt = 1;
			i++;
		}
		i++;
	}
	int ma = 0;
	for (int i = 0; i < n; i++)
	{
		if (ma < b[i])
			ma = b[i];
	}
	cout << ma << endl;
}