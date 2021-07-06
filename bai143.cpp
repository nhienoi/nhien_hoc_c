#include <iostream>
#include <cstring>
using namespace std;
int main() {
	char ly[] = "xin chao nguyen khanh ly";
	cout << endl;
	char nhien[] = " ly la co gai dep nhat tren doi";
	strcat(ly, nhien);
	cout <<"noi 2 chuoi bang strcat" << ly;
	cout << endl;
	int a = strlen(ly);
	cout << "do dai chuoi ly la: " << a;
	cout << endl;
	char trang[100];
	strcpy(trang, ly);
	cout << "sao chep chuoi 2 cho chuoi 1" << trang;
	return 0;
}
