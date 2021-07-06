#include <iostream>
#include <math.h>
using namespace std;
int main() {
	// pt ax2 + bx + c = 0
	int a, b, c, delta;
	cout << "nhap a: "; cin >> a;
	cout << "nhap b: "; cin >> b;
	cout << "nhap c: "; cin >> c;
	delta = b* b - 4 * a * c;
	if (delta >0) {
		cout << "pt co 2 nghiem: " << endl;
		cout << "nghiem cua pt la: " << (-b +sqrt(delta)) /( 2 * a) << endl;
		cout << "nghiem thu 2 cua pt la: "<< (-b - sqrt(delta)) /( 2 * a );
	} else if (delta == 0) {
		cout << "pt co nghiem kep: " << -b / 2 * a;
	} else {
		cout << "pt vo nghiem";
	}
	return 0;
}
