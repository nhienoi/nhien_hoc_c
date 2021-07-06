#include <iostream>
using namespace std;
int main() {
	long long int x;
	int sum = 0;
	cout << "Khanh Ly cute xin hay nhap x: ";
	cin >> x;
	while (x != 0) {
		sum += x % 10;
		cout << x % 10 << " ";
		x /= 10;
	}
	cout << "ket qua la: " << sum;
	return 0;
}
