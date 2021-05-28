#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "nhap n di thang  lon: ";
	cin >> n;
	bool ok;
	for (int i = 2; i < n; i++) {
		if ( n% i == 0) {
			return ok = false;
		} else {
			return ok = true;
			}
	}
	if (ok == true) {
		cout << n << " is a prime number";
	} else {
		cout << n << " is not a prime number";
	}
	return 0;
}
