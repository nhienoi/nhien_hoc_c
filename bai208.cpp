#include <iostream>
using namespace std;
void check(int n);

void check(int n) {
	int sum = 0;
	int kq = 1;
	while (n != 0) {
		for (int i = 1; i <= n % 10; i++) {
			kq *= i;
		}
		sum += kq;
		n = n / 10;
	}
	if (sum == n) {
		cout << n;
	} 
}

int main() {
	int a, b;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	for (int i = a; i <= b; i++) {
		check(i);
 	}
	return 0;
}
