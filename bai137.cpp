#include <iostream>
using namespace std;
int main() {
	int a[] = {4, 5, 6, 7, 8};
	for (int i = 0; i < 5; i++) {
		cout << a[i] << endl;
	}
	cout << endl;
	int *p = a;
	for (int i = 0; i < 5;i++) {
		cout << *(p + i) << "\t";
	}
	*(p+2 ) = 10;
	cout << endl;
	int i = 0;
	while (i < 5) {
		cout << *(p+i) <<"\t";
		i++;
	}
	return 0;
}
