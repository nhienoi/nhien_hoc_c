#include <iostream>
using namespace std;
void exprt(int a[], int n);
void type(int a[], int n);


vodi type (int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
}
void exprt(int a[], int n) {
	int i = 0;
	while(i < n) {
		cout << "a[" << i << "] = " << a[i];
		i++
		cout << endl;
	}
}
int main() {
	int n;
	cout << "quantity of n: ";
	cin >> n;
	int m[n];
	type(m, n);
	cout << "original array: ";
	exprt(m, n);
	return 0;
}