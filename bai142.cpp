#include <iostream>
using namespace std;
int main() {
	char str[10];
	str[0] = 'L';
	str[1] = 'y';
	str[2] = 'z';
	str[3] = 'u';
	str[4] = 't';
	str[5] = 'o';
	cout << str;
	cout << endl;
	char ly[] = {'l', 'y', 'z', 'u', 't', 'o'};
	cout << ly;
	cout << endl;
	char *ly = "lyzutp";
	cout << ly;
	return 0;
}
