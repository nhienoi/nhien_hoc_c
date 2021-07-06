#include <iostream>
using namespace std;
int main() {	
	int d, m, y;
	cout << "Khanh Ly yeu xin nhap ngay: ";
	cin >> d;
	cout << "Khanh Ly yeu xin nhap thang: ";
	cin >> m;
	cout << "Khanh Ly yeu xin nhap nam: ";
	cin >> y;
	switch (d) {
		case 26: 
			cout << "ngay sinh cua anh yeu Nhien";
			cout << endl;
			break;
		case 30: 
			cout << "ngay sinh cua em yeu Khanh Ly";
			cout << endl;
			break;
		default: 
			cout << "cha la ngay deo nao ca";
			cout << endl;
	}
	switch(m) {
		case 10: 
			cout << "thang sinh cua em yeu Ly";
			cout << endl;
			break;
		case 4: 
			cout << "thang sinh cua anh yeu Nhien";
			cout << endl;
			break;
		default: 
			cout << "muon choi Khanh Ly thi phai hoc nhieu thu lam nhap con sai thi sao choi dc !!!!";
			cout << endl;
	}
	switch(y) {
		case 2003: 
			cout << "nam sinh cua em yeu Khanh Ly";
			cout << endl;
			break;
		default: 
			cout << "muon choi Khanh Ly thi hoc gioi vao";
			cout << endl;
	}
	return 0;
}
