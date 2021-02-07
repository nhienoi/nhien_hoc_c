#include <iostream>
#include <iomanip>	// for std::setprecision()
using namespace std;

int main()
{
	double	d1{ 1.0 };
	double	d2{ 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 };

	if (d1 == d2) {
		cout << "d1 == d2" << "\n";
    }
	else if (d1 > d2) {
		cout << "d1 > d2" << "\n";
    }
	else if (d1 < d2) {
		cout << "d1 < d2" << "\n";
    }

	cout << std::setprecision(20);	// show 20 digits
	cout << "d1 = " << d1 << endl;
	cout << "d2 = " << d2 << endl;

	return 0;
}