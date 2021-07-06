#include <iostream>
using namespace std;
int main() {
	int count;
	int *m = &count;
	cout << "dia chia cua bien count la: "<< &count;
	cout << endl;
	cout << "gia tri cua bien count la: " << count;
	cout << endl;
	cout << "dia chi cau con tro la: " << m;
	cout << endl;
	count << "gia tri cua con tro la " << *m;
	return 0;
}
