#include <iostream>
#include <string.h>
using namespace std;
struct lover {
	char ten[100];
	int age;
};
struct people {
	char name[100];
	int age;
	lover ly;
	lover trang;
};
int main(){
	people nhien;
	strcpy(nhien.name, "Vu Duy Nhien");
	nhien.age = 18;
	strcpy(nhien.ly.ten, "Khanh Ly");
	nhien.ly.age = 17;
	strcpy(nhien.trang.ten, "Trang");
	nhien.trang.age = 17;
	cout << "ten cua toi la" << nhien.name;
	cout << endl;
	cout <<"toi nam nay: "<< nhien.age;
	cout << endl;
	cout << "toi co cac nguoi yeu la " <<nhien.ly.ten << " " << nhien.ly.age << "tuoi";
	cout << endl;
	cout << nhien.trang.ten << " " << nhien.trang.age << "tuoi";
	return 0;
}
