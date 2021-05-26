#include <iostream>
using namespace std;
int main() {
	int n;
	double x, ve1 = 1, ve2 = 1, result;
	cout << "nhap so nguyen n: ";
	cin >> n;
	cout << "nhap so thuc x: ";
	cin >> x;
	for (int i = 1; i <= n; i++) {
		ve1 *= (x*x + x + 1);
		ve2 *= (x*x - x +1);
	}
	result = ve1 + ve2;
	cout << "the result is : " << result;
	return 0;
}
