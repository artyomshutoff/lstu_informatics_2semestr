// artyomshutoff
#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>

using namespace std;

int main() {
	int N;
	cin >> N;
	deque <int> queue1, queue2;
	for (int i = 0; i < N; i++) {
		char move;
		cin >> move;
		if (move == '+') {
			int num;
			cin >> num;
			queue1.push_back(num);
			if (queue1.size() > queue2.size()) {
				queue2.push_back(queue1.front());
				queue1.pop_front();
			}
		}
		else if (move == '*') {
			int num;
			cin >> num;
			queue1.push_front(num);
			if (queue1.size() > queue2.size()) {
				queue2.push_back(queue1.front());
				queue1.pop_front();
			}
		}
		else {
			cout << queue2.front() << '\n';
			queue2.pop_front();
			if (queue1.size() > queue2.size()) {
				queue2.push_back(queue1.front());
				queue1.pop_front();
			}
		}
	}
	return 0;
}