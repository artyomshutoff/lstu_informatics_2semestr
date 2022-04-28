// artyomshutoff
#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector <int> fib = {1, 1};
	int n;
	cin >> n;
	for (int i = 2; i < 45; i++) {
		fib.push_back(fib[i - 1] + fib[i - 2]);
		if (i == n - 1) break;
	}
	cout << fib[n - 1];
	return 0;
}