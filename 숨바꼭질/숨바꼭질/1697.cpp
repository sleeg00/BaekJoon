#include <algorithm>
#include <iostream>
#include <queue>
using namespace std;

bool visit[100001];
int n,m;
int bfs(int n, int m){
	int cnt = 0;
	queue<int> q;
	q.push(n);

	while(1){
		int size = q.size();

        for (int i = 0; i < size; i++) {
            n = q.front();
            q.pop();
            if (n == m)
                return cnt;
            if (n > 0 && visit[n - 1] == 0) {
                q.push(n - 1);
                visit[n - 1] = 1;
            }
            if (n < 100000 && visit[n + 1] == 0) {
                q.push(n + 1);
                visit[n + 1] = 1;
            }
            if (n * 2 <= 100000 && visit[n * 2] == 0) {
                q.push(n * 2);
                visit[n * 2] = 1;
            }
        }
		cnt++;
		cout << " " << cnt << endl;
	}
}
int main(){
	cin >> n>>m;
	cout << bfs(n, m);
	return 0;
}