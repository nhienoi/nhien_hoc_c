#include <iostream>
#include <cstring>
using namespace std;
int main() {
	char ho[10];
	char ten[20];
	cout << "what is your first name ?: ";
	cin.getline(ho, 10);
	cout << "what is your last name ?: ";
	cin.getline(ten, 20);
	cout <<"ho va ten cua ban la: ";
	strcat(ho, " ");
	strncat(ho, ten, 3);
	puts(ho);
	return 0;
}
