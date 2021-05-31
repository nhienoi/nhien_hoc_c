#include <iostream>
using namespace std;
int main() {
	int *m;
	cout << "dia chi cua con tro m la: "<< m << endl;
	int a = 10;
	float b = 30.10;
	void *p = &b;
	p = &a;
	(*(float*)p) = 20.4;
	cout << "dia chi cua con tro p la: " << p << endl;
	cout << "dia chi cua a la: " << &a << endl;
	cout << "dia chi cua b la: " << &b << endl;
	cout << "gia tri cua con tro p la: " << (*(float*)p);
	return 0;
}
