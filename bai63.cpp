#include <iostream>
using namespace std;

void sayHello();
void sayHi();

void sayFuck() {
    sayHi();
    sayHello();
}

void sayHi()
{
	cout << "Hi mother fucker" << endl;
	sayHello();
}

void sayHello()
{
	cout << "Hello mother fucker" << endl;
	sayHi();
}


int main()
{
	sayHello();

	return 0;
}