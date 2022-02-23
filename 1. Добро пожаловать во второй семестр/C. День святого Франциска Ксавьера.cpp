#include <iostream>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	a += 1;
	int count = 0;
	for (int i = 1605; i <= b; i += 10) {
		if ((a <= i) and (i <= b)) {
			count++;
	}
	}
	cout << count;
	return 0;
}