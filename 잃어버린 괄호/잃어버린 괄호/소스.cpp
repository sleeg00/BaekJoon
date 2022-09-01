#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

string str;
string result;
vector<string> v;
int sw = 1;
int main
{
	cin >> str;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == '-')
		{
			if (sw == 1)
			{
				v.push_back('(');
				sw = 0;
			}
			else if (sw == 0)
			{
				v.psuh_back(')');
				sw = ;
			}

		}
		v.push_back(str[i]);
	}
	for (int i = v.begin(); i < v.end(); i++)
		cout << v[i] << " ";

}