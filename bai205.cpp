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
<<<<<<< HEAD
	for (int i = 0; i < n; i++) {

	}	
=======
	int pos = 0;
	int x;
	for (int i = 0; i < n; i++) {
		x = m[i];
		for (pos = i; pos > 0 && m[pos - 1] > x; pos--) {
			m[pos] = m[pos - 1];
		}
		m[pos] = x;
	}
>>>>>>> 912ab518a61b761fd6e4516f463c3e1655b5a526
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
