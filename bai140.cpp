#include <iostream>
using namespace std;

void swap(double *&a, double *&p);
void swap(double *&a, double *&p) {
	double temp = *a;
	*a = *p;
	*p = temp;
	cout << "gia tri cua a :" << *a << endl;
	cout << "gia tri cua b :" << *p;
	
}

int main() {
	int *a, *p, a = 10, b = 20;
	a = &a;
	p = &b;
	swap(double *a, double *p);
	return 0;
}
