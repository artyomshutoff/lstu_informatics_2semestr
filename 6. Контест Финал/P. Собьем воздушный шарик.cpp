#include <iostream>
#include <math.h>
#include <vector>
#include <iomanip>
 
using namespace std;

int main() {
	double P, Hp, S, Hs;
	cin >> P >> Hp >> S >> Hs;
	double angle = ((P - S) / (Hs - Hp));
	double L1 = ((Hp * angle + P) * 1.0 / sqrt(1.0 - angle * angle) * 1.0);
	if (L1 <= 0)
		cout << setprecision(5) << 0 << endl;
	else
		cout << setprecision(5) << L1 << endl;
	return 0;
}