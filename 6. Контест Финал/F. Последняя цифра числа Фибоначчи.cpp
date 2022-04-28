// artyomshutoff
#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int h = 0, t = 1, sum;
	while (n--) {
		sum = (h + t) % 10;
		h = t;
		t = sum;
	}
	cout << t;
	return 0;
}