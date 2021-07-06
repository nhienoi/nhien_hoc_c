#include <iostream>
using namespace std;
int main() {
	int x;
	cout << "vui long nhap so kwH: ";
	cin >> x;
	int price;
	if (x <= 100) {
		price = x * 600;
		cout << "Khanh Ly nguc to la: " << price << "vnd";
	} else if (x <= 150)  {
		price = 100 * 600 + (x - 100) * 700;
		cout << price;
	} else if (x <= 200) {
		price = 100 * 600 + 700 * 50 + (x - 150)*900;
		cout << price;
	} else {
		price = 100 * 600 + 700 * 50 + 50 * 900 + (x - 200) * 1100;
		cout << price;
	}
	
	return 0;
}
