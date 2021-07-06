#include <iostream>
using namespace std;

int total(int n) {
	if (n == 0) return 0;
	int ok;
	return  n + total(n-1);
}

int main() {
	int n;
	cout << "vui long nhap so n: ";
	cin >> n;
	total(n);
	return 0;
}
