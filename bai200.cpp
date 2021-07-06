#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


void type(int m[], int n);
void exprt(int m[], int n);
void bubbleSort(int m[], int n);

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
}
void bubbleSort(int m[], int n) {
	for (int i = 0; i < n - 1; i++ ) {
		for (int j = n - 1; j > i; j--) {
			int temp;
			if (m[j] < m[j -1]) {
				temp = m[j];
				m[j - 1] =  m[j];
				m[j] = temp;
			}
		}
	}
}

int main() {
	int n;
	cout << "type n: ";
	cin >> n;
	int m[n];
	cout << "type array: " << endl;
	type(m, n);
	cout << "export array: " << endl;
	exprt(m, n);
	cout << "after sort: " << endl;
	bubbleSort(m, n);
	exprt(m, n);
	return 0;
}
