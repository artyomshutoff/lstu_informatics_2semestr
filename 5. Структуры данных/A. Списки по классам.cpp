// artyomshutoff
#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

struct student {
	int Class;
	string Surname;
};

int main() {
	map <int, vector <string>> students;
	student human;
	while (cin >> human.Class >> human.Surname) {
		if (students.find(human.Class) != students.end())
			students[human.Class].push_back(human.Surname);
		else {
			students.insert({human.Class, {human.Surname}});
		}
	}
	for (auto& i : students) {
		for (int j = 0; j < i.second.size(); j++) {
			cout << i.first << ' ' << i.second[j] << '\n';
		}
	}
	return 0;
}