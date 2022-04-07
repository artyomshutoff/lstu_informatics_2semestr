#include <iostream>
#include <string>
using namespace std;

int char_to_int(char symb) {
	return symb - '0';
}

int main() {
	string str;
	cin >> str;
	long long sum = 0, len = str.length();
	for(int i = 0; i < len; ++i) {
		sum += char_to_int(str[i]);
	}
	if(sum % 3 == 0) cout << "YES";
	else cout << "NO";
	return 0;
}