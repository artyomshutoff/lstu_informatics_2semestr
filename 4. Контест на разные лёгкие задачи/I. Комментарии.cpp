#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main() {
	vector<char> answer(0);
	int flag = 0;
	char x;
	while (!cin.eof()) {
		if (flag == -1) {
			flag = 0;
		}
		else {
			x = cin.get();
		}
		if (flag == 0) {
			//ожидание любого символа
			if (x == '\'') {
				flag = 1;
				answer.push_back(x);
			}
			else if (x == '/') {
				flag = 2;
			}
			else if (x == '{') {
				flag = 3;
			}
			else if (x == '(') {
				flag = 4;
			}
			else if (x == '\n') {
				flag = 5;
			}
			else {
				answer.push_back(x);
			}
		}
		else if (flag == 1) {
			//ожидание закрывающей кавычки
			if (x == '\'') {
				flag = 0;
			} 
			answer.push_back(x);
		}
		else if (flag == 2) {
			//ожидание второго слеша
			if (x != '/') {
				flag = -1;
				answer.push_back('/');
			}
			else {
				flag = 6;
			}
		}
		else if (flag == 3) {
			//ожидание закрывающей фигурной скобки
			if (x == '}') {
				flag = 0;
			}
		}
		else if (flag == 4) {
			//ожидание звёздочки
			if (x != '*') {
				flag = -1;
				answer.push_back('(');
			}
			else {
				flag = 7;
			}
		}
		else if (flag == 5) {
			//ожидание конца строки
			if (x == '\n') {
				flag = 9;
			}
			else {
				answer.push_back('\n');
				flag = -1;
			}
		}
		else if (flag == 6) {
			//ожидание конца строки после двух слешей
			if (x == '\n') {
				flag = -1;
				answer.push_back('\n');
			}
		}
		else if (flag == 7) {
			//ожидание второй звёздочки
			if (x == '*') {
				flag = 8;
			}
		}
		else if (flag == 8) {
			//ожидание второй круглой скобки
			if (x == ')') {
				flag = 0;
			}
			else if (x == '*') {
				flag = 8;
			}
			else {
				flag = 7;
			}
		}
		else if (flag == 9) {
			if (x == '\n') {
				flag = 0;
			}
			else {
				answer.push_back('\n');
				flag = -1;
			}
		}
	}
	for (int i = 0; i < answer.size(); i++) {
		if (i == 0) {
			if (answer[i] != '\n') {
				cout << answer[i]; }
		}
		else {
			if ((answer[i - 1] == '\n') && (answer[i] == '\n')) {
				continue;
			}
			else {
				cout << answer[i];
			}
		}
	}
}