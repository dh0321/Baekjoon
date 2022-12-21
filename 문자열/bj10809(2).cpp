#include <iostream>
#include <string>
using namespace std;

int main() {
	
	string word;
	string alpha = "abcdefghijklmnopqrstuvwxyz";

	cin >> word;

	for (int i = 0; i < alpha.length(); i++) {
		cout << (int)word.find(alpha[i]) << " ";
	}

	return 0;
}
