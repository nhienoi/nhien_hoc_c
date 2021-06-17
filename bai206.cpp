#include <iostream>
using namespace std;
void type(int m[], int n);
void result(int m[], int n);

void type(int m[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "m[" << i << "] = ";
		cin >> m[i];
	}
}

void result(int m[], int n) {
	int min;
	int temp;
	for (int i = 1; i < n; i++) {
		min = m[0];
		if (min > m[i]) {
			temp = min;
			min = m[i];
			m[i] = temp;
		}
	}
	if (min > 0) {
		cout << "gia tri duong nho nhat: " << min;
	} else {
		cout << -1;
	}
}

int main() {
	int n;
	cout << "nhap so luong n: ";
	cin >> n;
	int m[n];
	type(m, n);
	result(m, n);
	return 0;
}