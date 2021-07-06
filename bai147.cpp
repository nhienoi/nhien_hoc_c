#include <iostream>
#include <string.h>
using namespace std;
int main() {
	char ly[25], duong[25], trang[25];
	strcpy(ly, "con dau buoi");
	strcpy(duong, "thang lon");
	strcpy(trang, "con dau buoi");
	int kq1 = strcmp(ly, trang); 
	switch(kq1) {	
		case 0: 
			cout << "bang nhau";
			break;
		case 1: 
			cout << "str2 lon hon str1";
			break;
		case -1:
			cout << "str2 nho hon str1";
			break;
		default: 
			cout << "dau buoi";
			break;
	}
	int kq2 = strcmp(ly, duong);
	cout << endl;
	cout << kq2;
	return 0;
}
