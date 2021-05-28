#include <iostream>
using namespace std;
int main() {
	int n, deml = 0, demc = 0;
	cout << "nhap so n: ";
	bool ok;
	cin >> n;
	int ly[n];
	for (int i  = 0; i < n; i++) {
		cout << "ly[" << i << "] = ";
		cin >> ly[i];
	}
	cout << "-______________________-" << endl;
	for (int i = 0; i < n; i++) {
		cout << "ly[" << i << "] = ";
		cout << ly[i] << endl;
	}
	cout << "-______________________-" << endl;
	for (int i = 0; i < n; i++) {
		if (ly[i] % 2 == 0) {
			cout << "ly[" << i << "] = " << ly[i] << endl;
			demc++;
		}
	}
	cout << "-______________________" << endl;
	for (int i = 0; i < n; i++) {
		if (ly[i] % 2 != 0) {
			cout << "ly[" << i << "] = " << ly[i] << endl;
			deml++;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 2; j < ly[i]; j++) {
			if (ly[i] == 2) {
				ok = true;
			} 
			if (ly[i] % j ==0) {
				ok = false;
			} else {
				ok = true;
			}
			if (ok == true) {
				cout << ly[i] << " ";
			}
		} 
	}
	cout << "-______________________" << endl;
	cout << "so cac so le la: " << deml;
	cout << endl;
	cout << "so cac so chan la: " << demc;
	return 0;
}
