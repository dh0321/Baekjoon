#include <iostream>
using namespace std;

int main()
{
	int a, b;
	int t = 10;

	while (true)
	{
		cin >> a >> b;

		if (cin.eof() == true)
		{
			break;
		}

		cout << a + b << endl;

	}

	return 0;
}
