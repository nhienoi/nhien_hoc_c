#include <iostream>
using namespace std;
int main() {
	cout << "khai bao mot bien con tro : ";
	int *p;
	p = new int;
	int a = 10;
	p = &a;
	cout <<"dia chi cua bien a la" << &a;
	cout << endl;
	cout << "dia chi cua bien b la" << p;
	cout << endl;
	cout << "gia tri cua bien b la" << *p;
	return 0;
}
