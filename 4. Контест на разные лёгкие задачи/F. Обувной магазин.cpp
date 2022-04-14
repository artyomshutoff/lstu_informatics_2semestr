#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n, v;
	cin >> n >> v;
	int a[v];
	for (int i = 0; i < v; i++)
		cin >> a[i];
	int new_ = 0;
	int s = 0;
	sort(a, a + v);
	for (int i = 0; i < v; i++) {
		if (a[i] < n)
			continue;
		else if (a[i] == s)
			continue;
		else if (a[i] == n) {
			new_++;
			s = a[i];
		}
		else if (a[i] - s >= 3) {
			new_++;
			s = a[i];
		}
	}
	cout << new_;
	return 0;
}