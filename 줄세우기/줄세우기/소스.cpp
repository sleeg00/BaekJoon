#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n, number, cnt = 0;
vector<int> v;
vector<int> v2;
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> number;
		v.push_back(number);
		v2.push_back(number);
	}
	if (n == 1)
	{
		cout << "0";
		return 0;
	}
	sort(v2.begin(), v2.end());
	int cnt = 0;
	int a=0;
	int sw = 0;
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] == v2[i])
		{
			a = i;
			sw = 1;
			break;
		}
	}
	if (sw == 0)
		cnt = n - 1;
	if (v[n - 1] != 1)
		cnt+= n - v[n - 1];
	else
		cnt+=n-(v[n-2]+1);
	cnt += a;
	/*
	int im = n;
	int index = 0;
	int start = 0;
	sort(v2.begin(), v2.end());

	while (im--)
	{
		if (v == v2)
			break;
		if (v[n-1] != n)
		{
			index = v[n-1]+1;
			auto it = find(v.begin(), v.end(), index);
			v.push_back(*it);
			v.erase(it);
			index = 0;
			cnt++;
		}
		else 
		{
			index++;
			auto it = find(v.begin(), v.end(), index);
			v.erase(it);
			v.insert(v.begin()+index-1, index);
			cnt++;
		}
	}
	*/
	cout << cnt << endl;
}