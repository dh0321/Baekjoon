#include <iostream>
using namespace std;

int main()
{
	int n;
	int result = 0;

	cin >> n;

	for (int i = 1; i < n + 1; i++)
	{
		result += i;
	}

	cout << result << endl;
	
	return 0;
}
