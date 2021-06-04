#include <iostream>
using namespace std;
struct student {
	char name[100];
	int age;
	char lop[10];
	bool isFucked;
};
int main() {
	student ly;
	cin.getline(ly.name, 100);
	cout << "ten cua con Ly la: " << ly.name;
	return 0;
}
