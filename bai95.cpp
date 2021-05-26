#include <iostream>
using namespace std;
int main() {
	char something;
	cout << "Khanh Ly, do you want to fuck me ? first you have to type something about character: ";
	cin >> something;
	cout << "Khanh Ly was fucked by Nhien, so now i will show you the result is: " << (int)something;
	cout << endl;
	cout << "Nhien is fucking Khanh Ly, so the result is: " << (char)(something +1);
	return 0;
}
