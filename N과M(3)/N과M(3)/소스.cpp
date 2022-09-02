#include <algorithm>
#include <iostream>

using namespace std;
int n, m, cnt, a[100];
void f(int index) {
	if (index == m) {
		for (int i = 0; i < m; i++)
			cout << a[i] << " ";
		cout << endl;
		return;
	}
	for (int i = 1; i <= n; i++) {
		a[index] = i;
		f(index + 1);
	}
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;
	f(0);
}