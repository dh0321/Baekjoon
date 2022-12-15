#include <iostream>
using namespace std;

int hansoo(int num) {
	int count = 0;
	
	if (num < 100) {
		return num;
	}

	else {
		count = 99;

		for (int i = 100; i < num; i++) {
			int third = i / 100;
			int second = (i % 100) / 10;
			int first = (i % 100) % 10;

			if ((third - second) == (second - first)) {
				count++;
			}
		}
		return count;
	}
}


int main() {

	int n;
	cin >> n;

	int result = hansoo(n);
	cout << result << endl;

	return 0;

}
