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
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int div = NOD(b, d);
	int NOK = b * d / div;
	a *= NOK / b;
	c *= NOK / d;
	int first = a + c;
	int second = NOK;
	div = NOD(first, second);
	cout << first / div << ' ' << second / div;
	return 0;
}