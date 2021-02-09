#include <iostream>
#include <limits.h>
using namespace std;
int main() {
	short a = 1;
	while(a < 10) {

		short b = 1;	
		while(b < a) {
			cout << b << " ";
			++b;
		}
		cout << endl;
		++a;
	}
	return 0;
}