#include <iostream>
using namespace std;

int main()
{
	int testcase;
	int a;
	int b;

	cin >> testcase;
	
	for (int i = 0; i < testcase; i++)
	{
		cin >> a >> b;
		cout << a + b << endl;
	}
	
	return 0;
}
