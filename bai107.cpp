#include <iostream>
#include <string>
using namespace std;
int main() {
	int n;
	cout << "Khanh Ly yeu xin hay nhap n: ";
	cin >> n;
	int chuc, donvi;
	string demc, demdv;
	if (n < 10) {
		switch(n) {
			case 0: 
				cout << "Khong";
				break;
			case 1: 
				cout << "Mot";
				break;
			case 2:
				cout << "Hai";
				break;
			case 3:
				cout << "Ba";
				break;
			case 4: 
				cout << "Bon";
				break;
			case 5:
				cout << "Nam";
				break;
			case 6:
				cout << "Sau";
				break;
			case 7:
				cout << "Bay";
				break;
			case 8:
				cout << "Tam";
				break;
			case 9: 
				cout << "Chin";
				break;
		}
	} else {
		chuc = (n / 10) * 10;
		donvi = (n % 10);		
	}
	switch(chuc) {
		case 10: 
			demc = "Muoi";
			break;
		case 20: 
			demc = "Hai muoi";
			break;
		case 30: 
			demc = "Ba muoi";
			break;
		case 40:
			demc = "Bon muoi";
			break;
		case 50:
			demc = "Nam muoi";
			break;
		case 60:
			demc = "Sau muoi";
			break;
		case 70:
			demc = "Bay muoi";
			break;
		case 80:
			demc = "Tam muoi";
			break;
		case 90:
			demc = "Chin muoi";
			break;
	}
	switch(donvi) {
		case 1: 
			demdv = "Mot";
			break;
		case 2:
			demdv = "Hai";
			break;
		case 3: 
			demdv = "Ba";
			break;
		case 4:
			demdv = "Bon";
			break;
		case 5: 
			demdv = "Nam";
			break;
		case 6:
			demdv = "Sau";
			break;
		case 7:
			demdv = "Bay";
			break;
		case 8:
			demdv = "Tam";
			break;
		case 9:
			demdv = "Chin";
			break;
	}
	cout << demc << " " << demdv;
	return 0;
}
