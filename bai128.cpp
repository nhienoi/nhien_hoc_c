#include <iostream>
using namespace std;
int main() {
	int a[] = {4, 5, 6, 26, 0, 12};
	for (int i = 0; i < 6; i++) {
		cout << a[i] << "\t";
	}
	cout << endl;
	int *p = a;
	for (int i = 0; i < 6; i++) {
		cout << *(p+i)<< "\t";
	}
	cout << endl;
	*(p + 3) = 113;
	for (int i =0 ;i < 6; i++) {
		cout << a[i] << "\t";
	}
	cout << endl;
	return 0;
}
