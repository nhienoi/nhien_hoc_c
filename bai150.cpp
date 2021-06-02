#include <iostream>
#include <string.h>
using namespace std;
int main() {
	char ly[100];
	cin.getline(ly,100);
	for (int i = strlen(ly); i >= 0; i--) {
		cout << ly[i];
	}
	return 0;
}
