#include <iostream>
#include <math.h>
using namespace std;
int main() {
	double x;
	cout << "nhap goc: ";
	cin >> x;
	const double PI = 3.14159265358979323846264;
	x = (PI / 180) * x;
	cout << " x la : " << x << " rad";
	double sinx = sin(x);
	double cosx= cos(x);
	double tanx= sin(x) / cos(x);
	double cotx= cos(x) / sin(x);
	cout << "sin x: "<< sinx << endl << "cosx: " << cosx << endl << "tanx: " << tanx << endl << "cotx: " << cotx;							 	
	return 0;
}
