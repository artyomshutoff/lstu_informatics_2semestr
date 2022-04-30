#include <iostream>

using namespace std;

int main() {
	int ans = 0;
	int N;
	cin >> N;
	int new_;
	cin >> new_;
	for (int i = 1; i < N; i++) {
		int old_ = new_;
		cin >> new_;
		if (old_ != new_ - 1)
			ans++;
	}
	cout << ans;
	return 0;
}