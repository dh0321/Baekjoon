#include <iostream>
using namespace std;

int main()
{
	int a;
	int b;
	int c;

	int result;

	cin >> a >> b >> c;

	if (a != b && a != c && b != c) {
		if (a > b) {
			if (c > a) {
				result = c * 100;
				cout << result;
			}
			else {
				result = a * 100;
				cout << result;
			}
		}
		else {
			if (c > b) {
				result = c * 100;
				cout << result;
			}
			else {
				result = b * 100;
				cout << result;
			}
		}
	}
	else {
		if (a == b && b == c)
		{
			result = 10000 + a * 1000;
			cout << result;
		}
		else {
			if (a == b || a == c) {
				result = 1000 + a * 100;
				cout << result;
			}
			else {
				result = 1000 + b * 100;
				cout << result;
			}
		}
	}
	return 0;
}
