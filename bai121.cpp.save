#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "nhap so phan tu n: ";
	cin >> n;
	int ly[n];
	for (int i = 0; i < n; i++) {
		cin >> ly[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <n; j++) {
			int ok;
			if (ly[i] > ly[j]) {
				ok = ly[i];
				ly[i] = ly[j];
				ly[j] = ok;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << ly[i] << " ";
	}
	return 0;
}
