//using sort function

#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int n;
	cin >> n;

	int array[n];

	for (int i = 0; i < n; i++)
	{
		cin >> array[i];
	}

  sort(array, array + n);

  cout << array[0] << " " << array[n-1] << endl;

	return 0;

}

