#include <algorithm>
#include <iostream>
using namespace std;

#define MAX 1000000

int prime[MAX] = { 0 };
int n;
void f() {

	for (int i = 2; i * i <= MAX; i++) {

		if (prime[i] == 0) {

			for (int j = i * i; j <= MAX; j += i) {
				prime[j] = 1;
			}
		}

	}

}
int main()
{

	f();
	while (1) {
		scanf("%d", &n);
		if (n == 0)
			break;
		bool check = false;
		for (int i = 3; i <= n; i += 2) {
			if (prime[i] == 0 && prime[n - i] == 0) {
				printf("%d = %d + %d\n", n, i, n - i);
				check = true;
				break;
			}
		}
		if (!check)
			printf("Goldbach's conjecture is wrong.\n");

	}
}