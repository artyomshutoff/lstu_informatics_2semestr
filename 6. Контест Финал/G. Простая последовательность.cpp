// artyomshutoff
#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n + 1] = {1, 1};
	for (int i = 2; i <= n; i++) {
		if (!(i%2)) a[i] = a[i/2] + a[i/2 - 1];
		else a[i] = a[i/2] - a[i/2 - 1];
	}
	cout << a[n];
	return 0;
}