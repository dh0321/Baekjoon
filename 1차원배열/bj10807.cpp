#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	int a[101];
	int v;
	int count = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	cin >> v;

	for (int i = 0; i < n; i++)
	{
		if (a[i] == v)
		{
			count++;
		}
	}

	cout << count << endl;

}
