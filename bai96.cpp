#include <iostream>
using namespace std;
int main() {	
	int x;
	cin >> x;
	int dv, c, t;
	dv = x / 100;
	c = (x - dv*100) / 10;
	t = x - (dv* 100  +  c * 10);
	cout << t << c << dv;
	return 0;
}
