#include <iostream>
#include <string>
using namespace std;

int main() {

	int arr[27] = { 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10 };
	int index;
	int min_time = 0;

	string alpha;
	cin >> alpha;

	for (int i = 0; i < alpha.length(); i++) {
		index = alpha[i] - 65;
		min_time += arr[index];
	}

	cout << min_time << endl;

	return 0;
}
