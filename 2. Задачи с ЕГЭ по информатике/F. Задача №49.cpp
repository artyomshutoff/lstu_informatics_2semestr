#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, x, y, k;
	int M[4];
	int R[4];
	int xA[4];
	int yA[4];

	for (int i = 0; i < 4; i++) {
		M[i] = 0;
		R[i] = 0;
	}
	
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		k = 0;
		if (x > 0 && y > 0) k = 1;
		if (x < 0 && y > 0) k = 2;
		if (x < 0 && y < 0) k = 3;
		if (x > 0 && y < 0) k = 4;

		if (k > 0) {
			M[k - 1]++;
			if ((min(abs(x), abs(y)) < R[k - 1]) || R[k - 1] == 0) {
				R[k - 1] = min(abs(x), abs(y));
				xA[k - 1] = x;
				yA[k - 1] = y;
			}

		}
	}
	k = 0;
	for (int i = 1; i < 4; i++)
		if ((M[i] > M[k]) || ((M[i] == M[k]) && (R[i] < R[k])))
			k = i;
	
	cout << "K = " << k + 1 << endl;
	cout << "M = " << M[k] << endl;
	cout << "A = (" << xA[k] << ", " << yA[k] << ")" << endl;
	cout << "R = " << R[k] << endl;
	return 0;
}