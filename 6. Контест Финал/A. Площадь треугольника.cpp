// artyomshutoff
#include <iostream>
#include <cmath>

using namespace std;

struct point {
	double x;
	double y;
};

int main() {
	point p1;
	point p2;
	point p3;
	cin >> p1.x >> p1.y >> p2.x >> p2.y >> p3.x >> p3.y;
	double a = sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));
	double b = sqrt(pow((p3.x - p2.x), 2) + pow((p3.y - p2.y), 2));
	double c = sqrt(pow((p3.x - p1.x), 2) + pow((p3.y - p1.y), 2));
	double P = a + b + c;
	double p = P / 2;
	double S = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << S;
	return 0;
}