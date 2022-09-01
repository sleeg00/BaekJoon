#include <iostream>
#include <algorithm>
using namespace std;

int M, N, fo, x, y;
int cal[100001], number;
int main()
{
	cin >> fo; ///얼마 만큼 for문 돌건지
	for (int i = 0; i < fo; i++){
		cin >> M >> N >> x >> y; 

		int cnt = x%(M+1);
		int a = M;
		int b = N;

		while (b!=0) {
			int r = a % b;
			a = b;
			b = r;
		}
		int check = M * N / a;

		while (1) {
			if (x > check || (x - 1) % N + 1 == y)
				break;
			x += M;
		}

		if (check<x) 
			cal[number++] = -1;
		else
			cal[number++] = x;

	}

	for (int i = 0; i < number; i++)
		cout << cal[i] << endl;
}