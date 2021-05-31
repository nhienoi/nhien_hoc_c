#include <iostream>
using namespace std;
int main() {
	int *m, *p;
	int a = 100;
	m = &a;
	p = &a;
	cout << "gia tri ban dau la: " << a << endl;
	cout << "dia chi cua a la: " << &a << endl;
	cout << "dia chi cua m la: " << m << endl;
	cout << "dia chi cua p la: " << p << endl;
	cout << "---------------------------------" << endl;
	*m = 10;
	cout <<"gia tri cua con tro m la "<< *m <<endl;
	cout << "gia tri cua a la: " << a << endl;
	cout << "gia tri cua p la: " <<* p << endl;
	return 0;
}
