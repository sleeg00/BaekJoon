#include <algorithm>
#include <iostream>
#include <queue>
using namespace std;

priority_queue<int, vector<int>, greater<int>> pq;
int n, number,a,b,hap=0;
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> number;
		pq.push(number);
	}
	if (n == 1){
		cout << 0;
		return 0;
	}
	while(1){
		a = pq.top();
		pq.pop();
		hap += a;
		if (pq.size() == 0){
			cout << hap;
			break;
		}
		b = pq.top();
		pq.pop();
		hap += b;
		if (pq.size() == 0){
			cout << hap;
			break;
		}
		pq.push(a + b);
	}
	return 0;
}