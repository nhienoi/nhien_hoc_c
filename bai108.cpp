#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int x, n;
	cout << "hello Khanh Ly nguc to !" << endl;
	cout << "************************"<< endl;
	cout << "type x: ";
	cin >> x;
	cout << "type n: ";
	cin >> n;

	double tich = 1;
	double gt = 1;
	double sum;
	double sum2 = 0;
	for (int i = 1; i <= n; i++) {
		tich *= x;
		gt *= i;
		sum = (double)(tich / gt);
		sum2 = sum2 + sum;	
	}
	cout << setprecision(5) << (double)sum2;
	return 0;
}
