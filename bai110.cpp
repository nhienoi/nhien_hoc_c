#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "Khanh Ly zu to xin hay nhap so n: ";
	cin >> n;
	for (int i = 1; i <= n; i++) { 
		int sum = 0;
		for (int j = 2; j <= i; j++) {
			if (i % j == 0) {
				sum += (i / j);
			}	
		}
		if (sum == i) {
			cout << i << " ";
		}
	}
	return 0;
}
