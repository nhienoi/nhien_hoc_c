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
	int site;
	bool ok;
	for (int i = 0; i < n; i++) {
		int min = m[0];
		if (min > m[i]) {
			int temp = min;
			min = m[i];
			m[i] = temp;
			site = i;
		}
	}
	cout << site;
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