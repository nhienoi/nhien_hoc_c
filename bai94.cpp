#include <iostream>
using namespace std;
int main() {
	int x_a, y_a, x_b, y_b;
	cout << "Khanh Ly yeu xin hay nhap toa do cua diem A(x_a, y_a): " << endl;
	cout << "toa do x_a: ";
	cin >> x_a;
	cout << "toa do y_a: ";
	cin >> y_a;
	cout << "Khanh Ly yeu xin hay nhap toa do cua diem B(x_b, y_b): " << endl;
	cout << "toa do x_b: ";
	cin >> x_b;
	cout << "toa do y_b: ";
	cin >> y_b;
	int distance = (x_b -x_a) * (x_b - x_a) + (y_b - y_a) * (y_b - y_a);
	cout << "the result is: " << "can cua: " << distance;	
	return 0;	
}
