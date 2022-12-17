#include <iostream>
using namespace std;


int main() {
	
	int n;
	cin >> n;

	char a = 0;
	int result = 0;

	for (int i = 0; i < n; i++) {
		cin >> a;
		result += a - 48; //char형이므로 'O'의 아스키코드 값 48을 빼줘야함
	}

	cout << result << endl;

	return 0;
}
