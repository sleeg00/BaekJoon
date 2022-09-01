#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
using namespace std;
int map[1000][1000]={0};
int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };
int n, k,sw=0;
int visit[1000][1000]={0};
int op = 0;
int idx = 1;
int cnt2 = 0;
int cnt = 0;
int label = 1;
vector<int> result;
void dfs(int x, int y) {
	
	visit[x][y] = 1;
	map[x][y] = label;
	cnt2++;
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx < 0 || ny < 0 || nx >= n || ny >= n)
			continue;
		if (visit[nx][ny]==0 && map[nx][ny]==1) {
			dfs(nx, ny);
		}
	}
}
int main() {
	freopen("input.txt", "rt", stdin);
	cin >> n;
	string str;
	for (int i = 0; i < n; i++) {
		cin >> str;
		for (int j = 0; j < str.length(); j++) { 
		

			if (str[j] == '1') {
				map[i][j] = 1;
			}
			else map[i][j] = 0;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
		{
			if (map[i][j] == 1 && visit[i][j]==0) {
				dfs(i, j);
				label++;
				result.push_back(cnt2);
				cnt2 = 0;
			}
		}
	}
	printf("%d\n", label-1);
	sort(result.begin(), result.end());
	for (int i = 0; i < result.size(); i++)
		cout << result[i] << endl;

	return 0;
}