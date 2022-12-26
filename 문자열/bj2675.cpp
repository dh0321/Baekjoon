#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int t; //테스트 케이스
	int r; //반복 횟수
	string s;

	cin >> t;
	
	for (int i = 0; i < t; i++) {
		cin >> r;
		cin >> s;

		for (int j = 0; j < s.length(); j++) {

			for (int k = 0; k < r; k++) {
				cout << s[j];
			}
		}
		cout << endl;
	}

	return 0;
}
