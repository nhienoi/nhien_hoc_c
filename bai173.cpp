#include <iostream>
using namespace std;
void h10toh2 (int n) {
	if(n >0) {
		int ds= n %2;
		n = n /2;
		h10toh2(n);
		cout <<ds;
	}
}

int main() {
	int n = 123423;
	h10toh2(n);
	return 0;
}
