#include <iostream>
using namespace std;
int main() {
	int a, b;
	a = 10;
	b = 20;
	cout << "gia tri ban dau cua a la " << a << endl;
	cout << "gia tri ban dau cua b la " << b << endl;
	int *pa, *pb, temp;
	pa = &a;
	pb = &b;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
	cout << "a la " << *pa << endl;
	cout << "b la " << *pb << endl;
	return 0;
}
