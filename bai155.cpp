#include <iostream>
#include <string.h>
using namespace std;
struct fuckLy {
	char name[100];
	int age;
	char addr[100];
};
int main() {
	fuckLy ly;
	cout << "nhap ten cua no: ";
	cin.getline(ly.name, 100);
	cout << "nhap tuoi: ";
	cin >> ly.age;
	cout << "dia chi nha no la: ";
	strcpy(ly.addr, "yen tien dau buoi");
	fuckLy nhien = ly;
	cout << endl;
	cout << "ten con do la: " << nhien.name;
	cout << endl;
	cout << "tuoi cua con do la: " << nhien.age;
	cout << endl;
	cout << "dia chi nha con do la: " << nhien.addr;
	return 0;
}
