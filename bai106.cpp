#include <iostream>
using namespace std;
int main() {
	int d, m, y;
	cout << "nhap ngay: ";
	cin >> d;
	cout << "nhap thang: ";
	cin >> m;
	cout << "nhap nam: ";
	cin >> y;
	int kq_d, kq_m, kq_y;
	kq_d = d;
	kq_m = m;
	kq_y = y;
	if (y % 4 == 0 && y %100 != 0) {
		if (m == 2) {
			if (d == 29) {
				kq_d = 1;
				kq_m = m+1;	
			}
		}
	} else {
		switch(m) {
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
				if(d == 31) {
					kq_d = 1;
					kq_m = m + 1; 
				} else {
					kq_d = d + 1;
				}
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				if(d == 30) {
					kq_d = 1;
					kq_m = m + 1; 
				} else {
					kq_d = d + 1;
				}
				break;
			case 2: 
				if (d == 28) {
					kq_d = 1;
					kq_m = m + 1;
				}
				else {
					kq_d = d + 1;
				}
				break;
			case 12: 
				if (m == 12) {
					if (d == 31) {
						kq_d = 1;
						kq_m = 1;
						kq_y = y + 1;
					} else {
						kq_d = d + 1;
					}
				}
				break;
			default: 
				cout << "Khanh Ly nguc to ngu ";
		}
	}
	cout << kq_d << " " << kq_m << " " << kq_y;	
	return 0;
}
