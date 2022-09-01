#include <iostream>
#include <algorithm>
#include<cstdio>
using namespace std;

int n, m, a[500001], b[500001];
int cnt = 0, start, ed, mid, st;
void bin(int k) {

	start = k;
	ed = st - 1;
	mid = (start + ed) / 2;
	cnt = 0;
	while (start <= ed) {
	
		if (a[start] == a[mid]) {
			cnt++;
		}
		else if (mid == 0)
			break;
		if (a[mid] < b[start]) {
			start = mid + 1;
		}
		else if (a[mid] > b[start]) {
			ed = mid - 1;
		}
		mid = (start + ed) / 2;
	}
	cout << cnt << " ";
}
int main() {
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cin >> m;
	for (int i = 0; i < m; i++)
		cin >> b[i];
	sort(a, a + n);
	sort(b, b + m);
	if (n > m)
		st = n;
	else
		st = m;
	for (int i = 0; i < m; i++) {
		bin(i);
	}
}