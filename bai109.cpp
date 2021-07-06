#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "Khanh Ly zu to xin hay nhap so n: ";
	cin >> n;
	int sum = 0;
	for (int i = 2; i <= n; i++) {
		if (n % i == 0) {
			sum += (n / i);
		} 
	}

//	cout << sum;	
	cout << endl;
	if (n != sum) {
		cout << n << " " << "isn't a perfect number, Khanh Ly zu to mlem mlem";
	} else {
		cout << n << " " << "is a perfect number, cong chua Khanh Ly nguc to";
	}
	return 0;
}
