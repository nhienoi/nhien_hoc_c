#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

void type(int m[], int n);
void exprt(int m[], int n);
void  bubbleSort(int m[], int n);

void type(int m[], int n) {
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		m[i] = rand() %100;	
	}
}

void exprt(int m[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "m[" << i << "] = " << m[i];
		cout << "\n";
	}
}

void bubbleSort(int m[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = n - 1;  j > i; j--) {
			if (m[j] < m[j-1]) {
				int temp = m[j];
				m[j] = m[j-1];
				m[j-1] = temp;
			}
		}
	}	

}

int main() {
	int n;
	cout << "type quantity of the elements: ";
	cin >> n;
	int m[n];
	type(m, n);
	cout << "original array: " << endl;
	exprt(m, n);
	cout <<"waiting for sort array:" << endl;
	cout << "loading";
	for (int i = 0; i <= 20; i++) {
		cout << ".";
	}
	cout << "after sort, now array are: " << endl;
	bubbleSort(m, n);
	exprt(m, n);
	return 0;
}
