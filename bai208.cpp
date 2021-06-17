#include <iostream>
using namespace std;
void check(int n);

void check(int n) {
	int sum = 0;
	while (n != 0) {
		for (int i = 1; i <= n % 10; i++) {
			int kq = 1;
			kq *= i;
			sum += kq;
		}
		n = n / 10;
	}
	if (sum == n) {
		cout << n;
	} else {
		cout << sum;
		cout << endl;
	}
}

int main() {
	// int a, b;
	// cout << "a = ";
	// cin >> a;
	// cout << "b = ";
	// cin >> b;
	// for (int i = a; i <= b; i++) {
	// 	check(i);
 // 	}
	check(145);
	return 0;
}
