// artyomshutoff
#include <iostream>
#include <cmath>

using namespace std;

struct point {
	double x;
	double y;
};

int main() {
	point p1, p2;
	cin >> p1.x >> p1.y >> p2.x >> p2.y;
	double a = p1.y - p2.y;
	double b = p2.x - p1.x;
	double c = p1.x * p2.y - p2.x * p1.y;
	cout << a << ' ' << b << ' ' << c;
	return 0;
}