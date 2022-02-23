#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int N, M, x, y;
    cin >> N >> M >> x >> y;
    if (N < M) swap(N, M);
    cout << min(min(M - x, x), min(N - y, y));
	return 0;
}