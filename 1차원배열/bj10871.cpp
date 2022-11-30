#include <iostream>
using namespace std;

int main() {

	int n, x;
	int a[10000]; //X가 <= 10000이므로 배열 붐위도 10000으로 해야 에러x

	cin >> n >> x;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < n; i++)
	{
		if (a[i] < x)
		{
			cout << a[i] << " ";
		}
	}

	return 0;
}
