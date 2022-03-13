#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

 int main() {
 	
 	string sentence;
 	getline(cin, sentence);
	for_each(sentence.begin(), sentence.end(), [](char & c){
    	c = toupper(c);
    });
 	map <char, int> letters;

 	for (char i : sentence) {
 		if (i == '.') {
 			break;
 		}
 		if (i != ' ' && 
 			i != '!' &&
 			i != '?' &&
 			i != ',') {
 			if (! letters.count(i)) {
 				letters.insert(pair <char, int>(i, 1));
 			}
 			else {
 				letters[i]++;
 			}
 		}
 	}

 	int max_count = 0;
 	for (auto & j : letters) {
 		if (j.second > max_count) {
 			max_count = j.second;
 		}
 	}

 	string str = "";

 	 for (auto & n : letters) {
 	 	if (n.second == max_count) {
 	 		str += n.first;
 	 	}
 	}

 	sort(str.begin(), str.end());

 	cout << str[0] << ' ' <<letters[str[0]];;
 	return 0;
 }