#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "nhap so phan tu n: ";
	cin >> n;
	int ly[n];
	for (int i = 0; i < n; i++) {
		cout << "ly[" << i <<"] = ";
		cin << ly[i];
			if( i > 1) {
			for (int j = 0; j < n; j++) {
				if (ly[i] > ly[j]) {
					cout << "Khanh Ly yeu nhap lai di";
					break;
				}
		
			}
		}
	return 0;
}
