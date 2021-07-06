#include <iostream>
using namespace std;
int main() {
	const double PI = 3.14159265358979323846264;
	double r;
	double cv, dt;
	cout << "nhap ban kinh duong tron: ";
	cin >> r;
	cv = 2 * PI * r;
	dt = PI * r * r;
	cout << "chu vi hinh tron la : "<< cv << endl;
	cout << "dien tich hinh tron la: "<< dt; 
	return 0;
}
