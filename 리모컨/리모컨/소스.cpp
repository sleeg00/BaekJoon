#include <algorithm>
#include <iostream>
#include <math.h>
#include <string>
using namespace std;

string str;
int cnt, number,hap,check;
int a[20],sw,sw2;
int main() {
	cin >> str;
	cin >> cnt;
	for (int i = 0; i < cnt; i++) {
		cin >> number;
		a[number] = 1;
	}
	for (int i = 0; i < str.size(); i++) {
		if (a[str[i] - '0']!=1 && sw == 0) {
			hap += (str[i] - '0') * pow(10, (str.size() - i - 1));
			check++;
		}
		else {
			sw = 1;
			int j = 1;
			while (true) {
				int im = str[i] - '0' - j;
				if (im < 0)
					im = 10 + im;
				
				if (a[im]!=1) {
					hap +=im * pow(10, (str.size() - i - 1));
					check++;
					sw2=1;
					break;
				}
				else if (a[str[i] - '0' + j] != 1 && sw2==0) {
					hap += (str[i] - '0' + j) * pow(10, (str.size() - i - 1));
					check++;
					break;
				}
				j++;
			}
		}

	}

		if (str == "100")
			cout << 0;
		else {
			if (stoi(str) - hap > 0)
				cout << check + stoi(str) - hap;
			else cout << check + hap - stoi(str);
		}
		return 0;
}