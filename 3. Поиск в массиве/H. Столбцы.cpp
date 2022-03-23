#include <bits/stdc++.h>

using namespace std;

int main() {
	int X, N;
	cin >> X;
	cin >> N;
	int table[N][N];

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> table[i][j];
		}
	}
	int exist;
	for (int i = 0; i < N; i++) {
		exist = 0;
		for (int j = 0; j < N; j++) {
			if (table[j][i] == X) {
				exist = 1;
				cout << "YES" << '\n';
				break;
			}
		}
		if (exist == 0) cout << "NO" << '\n';

	}

	return 0;
}