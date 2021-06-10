#include <iostream>
using namespace std;
void h10to2 (int n) {
	int sodu = n % 2;
	n /= 2;
	h10to2(n);
	cout << sodu;
}

int main() {
	int n;
	cout << "xin moi ban nhap n: ";
	cin >> n;
	h10to2(n);
	return 0;
}
