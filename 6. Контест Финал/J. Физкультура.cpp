// artyomshutoff
#include<iostream>

using namespace std;

int main() {
	int N;
	int user_input;
	cin >> N;
	int needed = 2;
	int garbage = 1;
	int count = 0;
	for (int i = 0; i < N; i++) {
		cin >> user_input;
		swap(needed, garbage);
		if (user_input != needed)
			count++;
	}
	cout << count;
	return 0;
}