#include <iostream>
using namespace std;
int main() {
	cout << "bai hoc ve con tro: ";
	int *ly;
	ly = new int;
	*ly = 100;
	cout <<"dia chi cua p la: "<< ly;
	cout << "gia tri cua p la: " << *ly;
	return 0;
}
