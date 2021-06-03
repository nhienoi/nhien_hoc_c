#include <iostream>
#include <string.h>
using namespace std;
struct aBitch {
	char name[100];
	bool isFucked;
	int age;
};
int main() {
	aBitch ly;
	strcpy(ly.name, "Nguyen Khanh Ly");
	ly.isFucked = true;
	ly.age = 17;
	cout << "ten cua a bithc la: " << ly.name;
	cout << endl;
	cout << "da bi du chua ?" << ly.isFucked;
	cout << endl;
	cout << "tuoi la:" << ly.age;
	return 0;
}
