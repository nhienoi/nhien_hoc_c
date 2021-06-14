#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main() {
	cout << "max value is: " << RAND_MAX << "\n";
	cout << "***********************";
	int n = rand();
	cout << "random a number from 0 to max value: " << n << "\n";
	srand(time(NULL));
	int max;
	int min;
	cout << "type a smallest value: ";
	cin >> min;
	cout << "type a largest value: ";
	cin >> max;
	int a;
	for (int i = min; i <= max; i++) {
		srand(time(NULL));
		a = rand() % (max - min) * min;
		cout << a << endl;
	} 
	return 0;
}
