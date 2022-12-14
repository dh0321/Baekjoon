#include <iostream>
using namespace std;

int Sum(int num) {
	
	int snum = num;

	while (num != 0) {
		snum += num % 10;
		num = num / 10;
	}

	return snum;
}


int main() {

	bool arr[10001] = { false }; //bool 배열의 default는 false다
	int n = 0;

	for (int i = 1; i < 10001; i++) {
		n = Sum(i);
		if (n <= 10000) {
			arr[n] = true;
		}
	}

	for (int i = 1; i <= 10000; i++) {
		if (!arr[i]) {
			cout << i << endl;
		}
	}

	return 0;

}
