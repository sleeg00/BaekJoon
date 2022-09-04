#include <algorithm>
#include <iostream>

using namespace std;

int n, m;
int arr[10000],da[100000];
bool visit[10001];
void f(int index) {
	if (index == m){
		for (int i = 0; i < m; i++)
			cout << da[i] << " ";
		cout << endl;
		return;
	}
	for (int i = 0; i < n; i++) {
		da[index] = arr[i];
		if (da[index - 1] < da[index]) 
			f(index + 1);
		else
			continue;
	}
}
int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr + n);
	f(0);
	return 0;
}