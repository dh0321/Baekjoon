#include <iostream>
using namespace std;

int main() {

	int c, n;
	cin >> c;

	int array[1000] = {0};
	double avg = 0;
	double count = 0;
	double result = 0;

	for (int i = 0; i < c; i++) {

		cin >> n;
	
		for (int j = 0; j < n; j++) {
			cin >> array[j];
			avg = avg + array[j];
		}

		avg = avg / n;

		for (int j = 0; j < n; j++) {
			if (array[j] > avg) {
				count++;
			}
			result = count / n * 100;
		}

		cout << fixed;
		cout.precision(3);
		cout << result << "%" << endl;

		avg = 0;
		count = 0;
		result = 0;
	}

	return 0;
}
