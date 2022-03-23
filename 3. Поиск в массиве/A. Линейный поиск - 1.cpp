#include <iostream>

using namespace std;

int main() {
	int N, x;
	cin >> N;
	int nums[N];
	int count = 0;
	for (int i = 0; i < N; i++) {
		cin >> nums[i];
	}
	cin >> x;
	for (int i = 0; i < N; i++) {
		if (nums[i] == x) count++;
	}
	cout << count;
	return 0;
}