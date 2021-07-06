#include <iostream>
using namespace std;
void check(int n);
int f(int n);

int f(int n) {
	int kq = 1;
	for (int i = 1; i <= n; i++) {
		kq *= i;
	}
	return kq;
}

void check(int n) {
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
	int n;
	cin >> "nhap so can test: ";
	cin >> n;
	int ok = f(n);
	cout << ok;
	return 0;
}
