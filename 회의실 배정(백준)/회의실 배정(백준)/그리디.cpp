#include <iostream>
using namespace std;
class work {
	long start;
	long end;
	work() {
		start = 0;
		end = 0;
	}
	work(int start, int end) {
		this -> start = start;
		this -> end = end;
	}
	void input() {
		cin >> start >> end;
	}
};
int main() {
	int n;
	cin >> n;
	work w[sizeof(n)];
	for (int i = 0; i < n; i++) {
		w[i].input();
	}
}