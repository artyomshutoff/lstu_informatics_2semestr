#include <bits/stdc++.h>
using namespace std;

int compare_dates(string a, string b) {
	string compare_states = "";
	string num_a = "";
	string num_b = "";
	for (int i = 0; i < a.size(); i++) {
		if ((a[i] == '.') || ((i + 1) == a.size())) {
			if ((i + 1) == a.size()) {
				num_a += a[i];
				num_b += b[i];
			}
			compare_states += (stoi(num_a) < stoi(num_b)) ? '<' : (stoi(num_a) > stoi(num_b)) ? '>' : '=';
			num_a = "";
			num_b = "";
			continue;	
		}
		num_a += a[i];
		num_b += b[i];
	}
	for (int i = 2; i >= 0; i--) {
		if (compare_states[i] == '>') return -1;
		if (compare_states[i] == '<') return 1;
	}
	return 0;
}

int main()
{
	int N;
	cin >> N;

	string old_human[3] = {" ", " ", "32.13.2101"};
	string human[3];
	int count = 0;

	for (int i = 0; i < N; i++) {
		cin >> human[0] >> human[1] >> human[2];
		if (compare_dates(human[2], old_human[2]) == 1) {
			count = 1;
			swap(old_human, human);
			continue;
		}
		if (compare_dates(human[2], old_human[2]) == 0) count++;
	}
	if (count == 1) cout << old_human[0] << ' ' << old_human[1] << ' ' << old_human[2];
	else cout << count;

	return 0;
}