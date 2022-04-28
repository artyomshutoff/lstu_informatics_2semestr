// artyomshutoff
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector <int> pop(const vector<int> &v1) {
	return vector <int> (v1.begin() + 1, v1.end());
}

int main() {
	vector <int> p1 = {0, 0, 0, 0, 0};
	vector <int> p2 = {0, 0, 0, 0, 0};
	pair <int, int> aux = {9, 0};
	int c1, c2;
	for (int i = 0; i < 5; i++)
		cin >> p1[i];
	for (int i = 0; i < 5; i++)
		cin >> p2[i];
	int count = 0;
	while (!p1.empty() and !p2.empty()) {
		count++;
		c1 = p1[0];
		c2 = p2[0];
		p1 = pop(p1);
		p2 = pop(p2);
		pair <int, int> cards = {c1, c2};
		if ((c1 > c2 && cards != aux) || (c1 == 0 and c2 == 9)) {
			p1.push_back(c1);
			p1.push_back(c2);
		}
		else {
			p2.push_back(c1);
			p2.push_back(c2);
		}
		if (count > pow(10, 6)) {
			cout << "botva";
			return 0;
		}

	}
	if (p2.empty())
		cout << "first " << count;
	else
		cout << "second " << count;
	return 0;
}