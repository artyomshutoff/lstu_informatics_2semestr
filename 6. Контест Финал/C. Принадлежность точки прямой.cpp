// artyomshutoff
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double x, y, a, b, c;
	cin >> x >> y >> a >> b >> c;
	if (!(a * x + b * y + c))
		cout << "YES";
	else cout << "NO";
	return 0;
}