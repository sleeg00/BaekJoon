#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
vector<int> a[10001];
vector<bool> visit[10000];
int n, m, r;
void bfs(int node) {
	visit[node] = true;
}
int main() {
	scanf_s("%d %d %d", &n, &m, &r);
	for (int i = 0; i < m; i++) {
		int x, y;
		scanf_s("%d %d", &x, &y);
		a[x].push_back(y);
		a[y].push_back(x);
	}
	for (int i = 1; i <= n; i++)
		sort(a[i].begin(), a[i].end());
	bfs(r);
}