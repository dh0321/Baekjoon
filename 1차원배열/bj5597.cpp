#include <iostream>
using namespace std;

int main() {

	int array[31];
	int n;

	for (int i = 0; i < 28; i++)
	{
		cin >> n;
		array[n] = 1;
	}

	for (int i = 1; i < 31; i++)
	{
		if (array[i] != 1) {
			cout << i << endl;
		}
	}

	return 0;

}

