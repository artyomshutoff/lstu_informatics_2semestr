#include <iostream>

using namespace std;

int main() {
	int N, M, K;
	cin >> N >> M >> K;
	cout << (M + (K/N) - 1) / (K/N);
	return 0;
}