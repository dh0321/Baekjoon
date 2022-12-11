#include <iostream>
#include<cstring>
using namespace std;

int main() {

	int n;
	cin >> n;

	string s;
	int count = 0, result = 0;

	for (int i = 0; i < n; i++) {
		cin >> s;

		for (int j = 0; j < s.length(); j++) {
			if (s[j] == 'O') {
				count++;
				result += count;
			}
			else
				count = 0;
		}

		cout << result << endl;
		count = 0;
		result = 0;
	}
	
	return 0;
}
