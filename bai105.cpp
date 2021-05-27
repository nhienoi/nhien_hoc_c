#include <iostream>
using namespace std;
int main() {
	int t, y;
	cout << "vui long nhap thang: ";
	cin >> t;
	cout << "vui long nhap nam: ";
	cin >> y;
	int test;
	if (y % 4 == 0 && y % 100 != 0) {
		test = 1;
	} else {
		test = 0;
	}
	
	switch(t) {
		case 1: 
			cout << "Khanh Ly nguc to 31 ngay";
			break;
		case 2: 
			switch(test) {
			case 1:
				cout << "Khanh Ly nguc to 29 ngay";
				break;
			case 0: 
				cout << "Khanh Ly nguc to 28 ngay";
				break;
			}
			break;
			
		case 3: 
			cout << "Khanh Ly nguc to co 31 ngay";
			break;
		case 4: 
			cout << "Khanh Ly nguc to co 30 ngay";
			break;
		case 5: 
			cout << "Khanh Ly nguc to co 31 ngay";
			break;
		default: 
			cout <<"Khanh Ly nguc to nhap sai roi";
	}
	return 0;
}
