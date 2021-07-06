#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "Khanh Ly zu to xin hay nhap: ";
	cin >> n;
	for (int i = 2; i < n; i++) {
		if (n % 1 == 0) {
			cout << n << " is not a prime number";
		} else {
			cout << n << " is a prime number";
		}	
	} 
	return 0;
}
