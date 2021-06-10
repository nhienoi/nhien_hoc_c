#include <iostream>
using namespace std;
int main() {
	char a, b;
	cin >> a >> b;
	cout << a << b <<"\n";
	int c = (int)a;
	int d = (int)b;
	cout << c << " "<< d <<"\n";
	for (int i = c; i <= d; i++) {
		int ok = (i - 32);
		cout << char(ok) << " ";
	}
	return 0;
}
