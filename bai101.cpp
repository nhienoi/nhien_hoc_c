#include <iostream>
using namespace std;
int main() {	
	int n;
	cout << "vui long nhap so kwH tieu thu dien: ";
	cin >> n;
	int price;
	if (n <= 100) {
		price = n * 600;
		cout << "gia tien phai tra cho Khanh Ly nguc to la: " << price << " vnd";
	}
	if (n >= 101 && n <= 150) {
		price = n * 700;
		cout << "gia tien phai tra cho Khanh Ly nguc dep la: " << price << " vnd";
	}
	if (n >= 151 && n <= 200) {
		price = n * 900;
		cout << "gia tien phai tra cho Khanh Ly nguc to la: " << price << " vnd";
	}
	if (n >= 201) {
		price = n * 1100;
		cout << "gia tien phai tra cho Khanh Ly mlem la: " << price << " vnd";
	}
	return 0;
}
