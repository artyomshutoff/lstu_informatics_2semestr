#include <iostream>
#include <map>

using namespace std;

int main() {
	int N, D, K, R;
	cin >> N;
	int c[100];
	for (int i = 0; i < 100; i++) 
		c[i] = 0;
	for (int i = 0; i < N; i++) {
		cin >> D >> K;
		R = K % D;
		if (R > 0) c[R]++;
	}
	int imax = 1;
	for (int i = 0; i < 100; i++) {
		if (c[i] >= c[imax])
			imax = i;
	}
	if (c[imax] == 0)
		imax = 0;
	cout << imax;
	return 0;
}