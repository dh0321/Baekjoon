#include <iostream>
using namespace std;

int main() {

	int array[10];
	int max = 0;

	for (int i = 0; i < 9; i++)
	{
		cin >> array[i];
		if (max < array[i])
		{
			max = array[i];
		}
	}

	for (int i = 0; i < 9; i++)
	{
		if (array[i] == max)
		{
			cout << max << endl;
			cout << i + 1 << endl;
		}
	}


	return 0;

}

