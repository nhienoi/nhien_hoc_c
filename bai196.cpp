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
		int temp;
		if (m[i] < m[i+1]) {
			temp = m[i];
			m[i] = m[i+1];
			m[i+1] = temp;
		}
	}	

}

int main() {
	int n;
	cout << "type quantity of the elements: ";
	cin >> n;
	int m[n];
	type(m, n);
	cout <<"waiting for sort array:" << endl;
	bubbleSort(m, n);
	cout << "xuat mang m: " << endl;
	exprt(m, n);
	bubbleSort(m, n);
	exprt(m, n);
	return 0;
}
