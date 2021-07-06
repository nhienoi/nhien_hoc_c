#include <iostream>
using namespace std;
int main() {
	unsigned int x;
	cout << "Khanh Ly yeu xin hay nhap so giay vao day: ";
	cin >> x;
	int hours, minutes, seconds;
	hours = (x / 3600) % 24;
	minutes = (x % 3600) / 60;
	seconds = (x % 3600) %60;
	cout << hours << ":" << minutes << ":" << seconds ;
	return 0;
}
