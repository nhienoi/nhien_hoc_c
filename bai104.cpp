#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	cout << "nhap a: ";
	cin >> a;
	cout << "nhap b: ";
	cin >> b;
	cout << "nhap c: ";	
	cin >> c;
	if (a> b > c) {
		cout << "a lon nhat";
	} else if (b > c) {
		cout << "b lon nhat";
	} else {
		cout << "c lon nhat";
	}

	return 0;
}
