#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
void type();
void xuat();
double distance();
struct coordinate {
	int x;
	int y;
};
void type(coordinate &toado) {
	cout << "nhap toa do x: ";
	cin >> toado.x;
	cout << "nhap toa do y: ";
	cin >> toado.y;
}
void xuat(coordinate &toado) {
	cout << "Diem co toa do la: "<< "(" << toado.x << "," << toado.y << ")";
}
double distance(coordinate a, coordinate b) {
	cout << "khoang cach giua 2 diem la: ";
	double x = sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
	cout << setprecision(4) << x;
	return x; 
}
int main() {
	coordinate A;
	coordinate B;
	type(A);	
	type(B);
	distance(A, B);
	return 0;
}
