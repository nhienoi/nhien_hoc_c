#include <iostream>
using namespace std;
void type(int m[], int n);
void check(int m[], int n);
int main() {
	int n;
	cout << "nhap so phan tu n: ";
	cin >> n;
	int m[n];
	type(m, n);
	check(m, n);
	return 0;
}
void type(int m[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "m[" << i << "] = :";
		cin >> m[i];
	}

}
void check(int m[], int n) {
	int sole = 0;
	int sochan = 0;
	for (int i = 0; i < n; i++) {
		if (m[i] % 2 == 0) {
			sochan++;
		} else {
			sole++;
		}
	}
	cout << "so le la: " << sole;
	cout << endl;
	cout << "so chan la: " << sochan;
}
