#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	if (n > 0){
		int count = 0;
		int tong = 0;
		int uk = n;
		while (uk > 0) {
			uk /= 10;
			count++;
		} 
		cout <<"so count la: " <<count <<"\n";
		cout << "****************";
		cout <<"n la: " << n <<"\n";
		int ok = count;
		for (int i = 0; i < ok; i++) {
			int ok = n;
			ok %= 10;
			n /= 10;
			tong = tong + (ok * pow(10, count));
			cout << "count = :" << count << "\n";
			count--;
		}
		cout << tong / 10;
	}
	return 0;
}
