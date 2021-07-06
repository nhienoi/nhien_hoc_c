#include <iostream>
using namespace std;
void hoanvi(int a, int b) {
	int *p;
	p = new int;
	p = &a;
	a = *&b;
	b = *p;
}

int main() {
	int a , b;
	cout << "nhap a: ";
	cin >> a;
	cout << "nhap b: ";
	cin >> b;
	hoanvi(a, b);
	cout << "a la: " << a;
	cout << "b la: " << b;
	return 0;
}
