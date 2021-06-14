#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void type(int m[], int n);
void exprt(int m[], int n);
void selectionSort(int m[], int n);

int main() {
	int n;
	cout << "quantity of array: ";
	cin >> n;
	int m[n];
	type(m, n);
	selectionSort(m, n);
	exprt(m, n);
	return 0;
}

void type(int m[], int n) {
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		m[i] = rand() % 100;
	}
}

void exprt(int m[], int n) {
	for (int i =0; i < n; i++) {
		cout << m[i] << endl;
	}
}
void selectionSort(int m[], int n) {
	int min;
	for (int i = 0; i < n; i++) {
		min = i;
		for (int j = 1; j < n; j++) {
			if (m[min] < m[j]) {
				min = j;
			}

			if (min != j) {
				int temp = m[min];
				m[min] = m[j];
				m[j] = temp;
			}
		}
	}
}

