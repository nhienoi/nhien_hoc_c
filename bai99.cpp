#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	// ax + b = 0
	double a, b, x;
	cin >> a >> b;
	if( a == 0 && b == 0) {
		cout << "pt co vo so nghiem";
	} else if (a == 0 && b != 0) {
		cout << "pt vo nghiem";
	}	
	else {
		cout << "pt co nghiem: ";
		x = -b / a;
		cout << x;
	}
	cout << setprecision(3) << x;	
	return 0;
}
