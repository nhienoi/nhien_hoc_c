#include <iostream>
using namespace std;
int main() {
	int a = 20, b = 15;
	int *pa, *pb, temp;
	pa = &a;
	pb = &b;
	temp = *pa;
	*pa = * pb;
	*pb = temp;
	cout << "a = "<< a << endl;
	cout << "b = " << b;
	return 0;	
}
