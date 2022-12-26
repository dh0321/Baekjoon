#include <iostream>
#include <string>
using namespace std;

int main() {
	
	string str;
	int alpha[26] = { 0 };
	int max = 0, max_num = 0, cnt = 0;

	cin >> str;


	//아스키 코드 대문자: 65 ~90, 소문자 : 97 ~ 122
	for (int i = 0; i < str.length(); i++) {
		if (str[i] < 97)
			alpha[str[i] - 65]++; //A = 65, Z = 90
		else
			alpha[str[i] - 97]++; //a = 97, z = 122
	}

	for (int i = 0; i < 26; i++) {
		if (max < alpha[i]) {
			max = alpha[i];
			max_num = i;
		}
	}

	for (int i = 0; i < 26; i++) {
		if (max == alpha[i])
			cnt++;
	}

	if (cnt > 1)
		cout << "?" << endl;
	else
		cout << (char)(max_num + 65);

	return 0;
}
