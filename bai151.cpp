#include <iostream>
#include <string.h>
using namespace std;
int main() {
	char ly[100];
	char nhien[100];
	char trang[10];
	strcpy(trang, " ");
	cin.getline(ly, 100);
	cin.getline(nhien, 100);
	for (int i = 0; i < strlen(ly);i++) {
		char c = ly[i];
		int result = strcmp(c, trang);
		if (result != 0){ 
			cout << ly[i];
		}else {
			cout << endl;
		}
	}
	return 0;
}
