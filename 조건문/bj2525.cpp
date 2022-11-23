#include <iostream>
using namespace std;

int main()
{
	int a;
	int b;
	int c;

	cin >> a >> b;
	cin >> c;

	if (b + c < 60)
	{
		cout << a << " " << b + c << endl;
	}
	else
	{
		a += (b + c) / 60;
		b = (b + c) % 60;

		if (a > 23)
		{
			a -= 24;
			cout << a << " " << b << endl;
		}
		else
			cout << a << " " << b << endl;
	}

	return 0;
}
