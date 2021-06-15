#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void type(int m[], int n);
void epxrt(int m[], int n);
void insertionSort(int m[], int n);

void type(int m[], int n) {
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		m[i] = rand() % 100;
	}
}

void exprt(int m[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "m[" << i << "] = " << m[i] << endl;
	}
	cout << endl;
}

void insertionSort(int m[], int n) {
	for (int i = 0; i < n; i++) {

	}	
}

using namspace std;
int main() {
	int n;
	cout << "quantity of array: ";
	cin >> n;
	int m[n];
	type(m, n);
	cout << "original array: " << endl;
	exprt(m, n);
	insertionSort(m, n);
	cout << "array after sorted: " << endl;
	exprt(m, n);
	return 0;
}
