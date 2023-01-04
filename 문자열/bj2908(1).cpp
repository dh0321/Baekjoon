#include <iostream>
#include <string>
using namespace std;

int main() {

	string a, b;
	char tempA = 0;
	char tempB = 0;

	cin >> a;
	cin >> b;

	tempA = a[0];
	a[0] = a[2];
	a[2] = tempA;

	tempB = b[0];
	b[0] = b[2];
	b[2] = tempB;

	if (a[0] > b[0])
		cout << a << endl;

	else if (a[0] < b[0]) 
		cout << b << endl;

	else {
		if (a[1] > b[1]) 
			cout << a << endl;
		
		else if (a[1] < b[1]) 
			cout << b << endl;
		
		else {
			if (a[2] > b[2])
				cout << a << endl;

			else
				cout << b << endl;
		}
	}

	return 0;

}
