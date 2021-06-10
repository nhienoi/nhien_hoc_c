#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	double a{ 5.23 };
	cout << setprecision(20);
	cout << a;
	cout << endl;
	cout << sizeof(unsigned int);
	cout << endl;
	char c{ 75 };
	cout << c;
	cout << endl;
	char nhien{ 76 };
	cout << static_cast<char>(nhien);
	cout << endl;
	char ok{ 71 };
	cout << static_cast<char>(ok);
	cout << endl;
	cout << "tab dau tien\t" << "uk";
	return 0; 
}
