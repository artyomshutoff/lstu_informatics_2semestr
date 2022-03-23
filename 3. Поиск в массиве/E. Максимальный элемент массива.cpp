#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int N, max;
	cin >> N;
	int nums[N];
	for (int i = 0; i < N; i++) {
		cin >> nums[i];
	}
	max = -2000;
	for (int i = 0; i < N; i++) {
		if (nums[i] > max) max = nums[i];
	}
	cout << max;
	return 0;
}