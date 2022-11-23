#include <iostream>
using namespace std;

int main()
{
	int a;
	int b;
	int c;

	int result;

	cin >> a >> b >> c;

	if (a == b && b == c)
	{
		result = 10000 + a * 1000;
		cout << result << endl;
	}
	else if (a == b && a != c)
	{
		result = 1000 + a * 100;
		cout << result << endl;
	}
	else if (a == c && a != b)
	{
		result = 1000 + a * 100;
		cout << result << endl;
	}
	else if (b == c && a != b)
	{
		result = 1000 + b * 100;
		cout << result << endl;
	}
	else
	{
		if (a > b && a > c)
		{
			result = a * 100;
			cout << result << endl;
		}
		else if (b > a && b > c)
		{
			result = b * 100;
			cout << result << endl;
		}
		else if (c > a && c > b)
		{
			result = c * 100;
			cout << result << endl;
		}
	}

	return 0;
}
