#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;
	int f[N][N];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> f[i][j];
		}
	}
	int i = N - 1;
	int j = 0;
	int sum = f[i][j];
	while ((i != 0) or (j != N - 1)) {
		if (i == 0) {
			sum += f[i][j + 1];
			j++;
		}
		else if (j == N - 1) {
			sum += f[i - 1][j];
			i--;
		}
		else if (f[i][j + 1] > f[i - 1][j]) {
			sum += f[i][j + 1];
			j++;
		}
		else {
			sum += f[i - 1][j];
			i--;
		}
	}
	cout << sum;
	return 0;
}