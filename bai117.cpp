#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "nhap n phan tu: ";
	cin >> n;
	int ly[n];
	for (int i = 0; i < n; i++) {
		cout << "ly[" << i <<"] = ";
		cin >> ly[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (ly[i] > ly[j]) {
				int ok = ly[i];
				ly[i] = ly[j];
				ly[j] = ok;
			}
		}
	}
	cout << "=========================" << endl;
	for (int i = 0; i < n; i++) {
		cout << "ly[" << i << "] = " << ly[i] << endl;
	}
	return 0;
}
