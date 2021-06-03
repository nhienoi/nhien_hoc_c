#include <iostream>
#include <string.h>
using namespace std;
struct nhien {
	char name[100];
	int age;
	bool gender;
	char title[50];
	char author[50];
	float price;
};
int main() {
	nhien nhien;
	cout << "nhap ten ";
	cin.getline(nhien.name, 100);
	cout << endl;
	cout << "Nhap tuoi";
	cin >> nhien.age;
	cout << endl;
	cout << "title la: ";
	cin.getline(nhien.title, 50);
	cout << "------------------" << endl;
	nhien uk = nhien;
	cout << "ten la"<< uk.name;
	cout << endl;
	cout << "tuoi la: " << uk.age;
	cout << "title la: " << uk.title;
	return 0;
}
