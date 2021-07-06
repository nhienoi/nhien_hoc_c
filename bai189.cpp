#include <iostream>
#include <string.h>
using namespace std;
struct student {
	string ma;
	string name;
	int age;
};

int main() {
	int n;
	cout << "nhap so sinh vien vao di: ";
	cin >> n;
	student students[n];
	for (int i = 0; i < n; i++) {
		cout << "nhap sinh vien thu: " << i << endl;
		cout << "nhap ma so: ";
		cin >> students[i].ma;
		cout << "nhap ten: ";
		cin >> students[i].name;
		cout << "nhap tuoi: ";
		cin >> students[i].age;
	}
	cout << "chuong trinh tim kiem sinh vien: "<< endl;
	cout << "###############################################" << endl;
	string ok;
	cout << "moi ban nhap: ";
	cin >> ok;
	for (int i = 0; i < n; i++) {
		if (ok == students[i].ma || ok == students[i].name) {
			cout << "hoc sinh do la: ";
			cout << students[i].name;
			break;
		}
		else {
			cout << "ban sai roi, moi ban nhap lai: ";
			break;
		} 
	}
	cout << "toi muon dit Khanh Ly";
	return 0;
}
