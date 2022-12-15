#include <iostream>
using namespace std;
 
int hansoo(int num) {
	int count = 0;
 
	if (num < 100) {
		return num;
	} 
	else {
		count = 99;
 
		for (int i = 100; i <= num; i++) {
			int hund = i / 100;		 
			int ten = (i / 10) % 10; 
			int one = i % 10;
 
			if ((hund - ten) == (ten - one)) { 
				count++;
			}
		}
	}
	return count;
}
 
int main() {
 
	int n;
	cin >> n;
 
	int result = hansoo(n);
	cout << result;
	return 0;
}
