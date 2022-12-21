#include <iostream>
#include <string>
using namespace std;

int main() {
	
	string word;
	int alpha[26];

	cin >> word;

	for (int i = 0; i < 26; i++) {
		alpha[i] = -1; //모든 알파벳을 -1로 초기화
	}

	for (int i = 0; i < word.length(); i++) {
		if (alpha[word[i] - 97] == -1) {
			alpha[word[i] - 97] = i;
		}
	}

	for (int i = 0; i < 26; i++) {
		cout << alpha[i] << " ";
	}

	return 0;
}
