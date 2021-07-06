#include <iostream>
using namespace std;
int main() {
	int n, sum = 0;
	cout << "Nhap so n: ";
	cin >> n;
	int ly[n];
	for (int i = 0; i < n; i++) {
		cout << "ly[" << i << "] = ";
		cin >> ly[i];
		sum += ly[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (ly[i] < ly[j]) {
				int nmax = ly[i];
				ly[i] = ly[j];
				ly[j] = nmax;
			}
		}
	}
	cout << "phan tu lon nhat la: " << ly[n-1];
	cout << "\n";
	cout << "phan tu nho nhat la: " << ly[0];
	cout << "\n";
	cout << "tong cac phan tu trong mang la: " << sum;
	return 0;
}
