#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;
int main() {
	char ly[] = "hello everyone i am a prince";
	cout << "do dai chuoi ly la: "<< strlen(ly);
	cout << endl;
	char nhien[255];
	cout << "nhap chuoi: ";
	cin.getline(nhien, 255);	
	cout << "chuoi vua nhap la: ";
	puts(nhien);
	return 0;
}
