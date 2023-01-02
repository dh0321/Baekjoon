#include <iostream>
#include <string>
using namespace std;

int main() {

	string str;
	getline(cin, str); //공백을 포함한 문자열을 받을 땐 cin 대신 getline

	int count = 1;

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ' ') {
			count++;
		}
	}

	if (str[0] == ' ') {  //맨 앞이 공백일 경우
		count--;
	}
	if (str[str.length() - 1] == ' ') {  //맨 뒤가 공백일 경우
		count--;
	}

	cout << count;

}
