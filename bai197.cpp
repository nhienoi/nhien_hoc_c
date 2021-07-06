#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main() {
	cout << RAND_MAX << "\t";
	srand(ETIME(NULL));
	int n = rand();
	cout << "gia tri ngau nhien la: ";
	cout << n;	
	return 0;
}
