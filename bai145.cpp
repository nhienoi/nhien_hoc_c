#include <iostream>
#include <string.h>
using namespace std;
int main() {
	char ly[255];
	cout << "nhap chuoi : ";
	cin.getline(ly, 255);
	cout << "chuoi ly la: ";
	puts(ly);
	char nhien[255];
	strcpy(nhien, ly);
	cout << "chuoi nhien la: ";
	puts(nhien);
	cout << endl;
	char trang[255];
	strncpy(trang, ly, 10);
	cout << "chuoi trang la: ";
	puts(trang);
	return 0;
}
