#include <bits/stdc++.h>

using namespace std;

int main() {
	int N;
	cin >> N;
	int nums[N];
	for (int i = 0; i < N; i++)
		cin >> nums[i];
	sort(nums, nums + N);
	cout << nums[0] << ' ' << nums[1];
	return 0;
}