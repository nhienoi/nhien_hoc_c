#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void type(int m[], int n);
void exprt(int m[], int n);
void selectionSort(int m[], int n);

void type(int m[], int n) {
	for (int i = 0; i < n; i++) {
		m[i] = rand() % 100;
	}
}

void exprt(int m[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "m[" << i << "] = " << m[i] << endl;
	}
}

void selectionSort(int m[], int n) {
	int min;
	for (int i = 0; i < n; i++) {
		min = i;
		for (int j = i + 1; j < n; j++) {
			if (m[j] < m[min]) {
				min = j;
			}
		}
		int temp;
		temp = m[min];
		m[min] = m[j];
		m[j] = temp;
	}
}
int main() {
	int n;
	cout << "quantity of arrays: ";
	cin >> n;
	int m[n];
	type(m, n);

	return 0;
}