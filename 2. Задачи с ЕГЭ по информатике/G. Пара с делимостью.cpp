#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	int del_7 = 0; 
	int max = 0;
	while (true) {

		cin >> n;

		if (n == 0) break;

		if ((n % 7 == 0 && n % 49) && (n > del_7)) del_7 = n;
		else if ((n % 7 != 0) && (n > max)) max = n;
	}
	if (del_7 && max) cout << max * del_7;
	else cout << 1;
	return 0;
}