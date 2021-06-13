#include <iostream>
#include <string.h>

using namespace std;

void type(production listOfProduction[], int n);
void exprt(production listOfProduction[], int n);

struct production {
	int code;
	string name;
	float price;
};

void type(production listOfProduction[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "listOfProduction[" << i << "]: \n";
		cout << "code:";
		cin >> listOfProduction[i].code;
		cout << "name: ";
		cin >> listOfProduction[i].name;
		cout << "price:";
		cin >> listOfProduction[i].price;
	}
}

void exprt(production listOfProduction[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "listOfProduction[" << i << "]: ";
		cout << "code is: " << listOfProduction[i].code <<;
		cout << "name is: " << listOfProduction[i].name <<;
		cout << "price is: " << listOfProduction[i].price << ;
	}
}

int main() {
	int n;
	production listOfProduction[];
	cout >> "nhap n: ";
	cin >> n;
	type(listOfProduction, n);
	exprt(listOfProduction, n);
	return 0;
}