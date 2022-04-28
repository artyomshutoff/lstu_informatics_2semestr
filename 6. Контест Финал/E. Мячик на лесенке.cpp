// artyomshutoff
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N;
	cin >> N;
	vector <int> A = {0, 1, 1};
	for (int i = 0; i < N - 1; i++) {
		A.push_back(A[A.size() - 1] + A[A.size() - 2] + A[A.size() - 3]);
	}
	cout << A[A.size() - 1];
	return 0;
}