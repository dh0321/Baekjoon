#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	double array[1001] = {0};
	int max = 0;
	double avg = 0;

	for (int i = 0; i < n; i++) {

		cin >> array[i];

		if (array[i] > max)
			max = array[i];
	}


	for (int i = 0; i < n; i++) {
		array[i] = array[i] / max * 100;
		avg += array[i];
	}

	cout << avg / n << endl;

	return 0;
}
