#include<iostream>
#include <cmath>

using namespace std;

int NOD(int a, int b) {
	a = abs(a);
	while (a && b) {
		if (a >= b) {
			a %= b;
		}
		else {
			b %= a;
		}
	}
	return a + b;
}

int main() {
	int a, b;
	cin >> a >> b;
	int div = NOD(a, b);
	cout << a / div << ' ' << b / div;
	return 0;
}