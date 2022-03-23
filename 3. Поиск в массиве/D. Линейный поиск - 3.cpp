#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int N, x;
	cin >> N;
	int nums[N];
	for (int i = 0; i < N; i++) {
		cin >> nums[i];
	}
	cin >> x;
	for (int i = 0; i < N; i++) {
		if (nums[i] == x) {
			cout << i + 1 << ' ';
		}
	}
	return 0;
}