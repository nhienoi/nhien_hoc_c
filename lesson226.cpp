#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main() {
	string a = "toi muon dit Nguyen Khanh Ly";
	for (int i = a.length();i >= 0; i--) {
		cout << a[i];
	}
	return 0;
}
