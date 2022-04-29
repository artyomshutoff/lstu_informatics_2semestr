// artyomshutoff
#include<iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector <int> ans(n), cost(n);
	for (int i = 0; i < n; i++)
		cin >> cost[i];
	ans[0] = cost[0];
	ans[1] = cost[1];
	for (int i = 2; i < n; i++)
		ans[i] = min(ans[i-1], ans[i-2]) + cost[i];
	cout << ans[n - 1] << endl;
	return 0;
}