#include <iostream>
using namespace std;
int main() {
	int n, i, s;
n1: cin >> n;
	if (n < 5) goto n1;
	s = 0;
	for (i = 1; i < n; ++i) {
		s = s + i;
		if (s > n) break;
	}
	cout << i - 1;
	return 0;
}