#include <iostream>
#include<cstring>
using namespace std;

int main() {

	int n;
	cin >> n;

	char array[80];
	int count = 0, result = 0;

	for (int i = 0; i < n; i++) {
		cin >> array;

		for (int j = 0; j < strlen(array); j++) {
			if (array[j] == 'O') {
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
