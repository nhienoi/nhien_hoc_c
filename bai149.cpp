#include <iostream>
#include <string.h>
using namespace std;
int main() {	
	char ly[100];
	cin.getline(ly,100);
	for (int i = 0; i < strlen(ly); i++) {
		char c = ly[i];
		int a = static_cast<int>(c);
		cout << a << endl;
	}
	return 0;
}
