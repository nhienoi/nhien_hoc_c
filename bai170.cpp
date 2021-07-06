#include <iostream>
using namespace std;
int main() {
	int a, b;
	cout <<"Nhap a: ";
	cin >> a;
	cout <<"Nhap b: ";
	cin >> b;
	cout << (a | b) + (a & b);
	return 0;
}
