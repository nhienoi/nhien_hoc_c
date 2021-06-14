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

/////////////////////////////////
//            n = 8            //
//_____________________________//
// 23. 74. 26. 12. 8. 45. 2 23.//
//_____________________________//
//  0   1   2  3   4   5  6  7 //
/////////////////////////////////


/////////////////////////////////
//            n = 8            //
//_____________________________//
//  1. 74. 26. 12. 8. 45. 2 23.//
//_____________________________//
//  0   1   2  3   4   5  6  7 //
/////////////////////////////////

void selectionSort(int m[], int n) {
	for (int i = 0; i < n; i++) {
		int min = i;
		for (int j = i + 1; j < n; j++) {
			if (m[j] < m[min]) {
				min = j;
			}
		}
		int convert = m[min];
		m[min] = m[i];
		m[i] = convert;
	}
}

/////////////////////////////////
//            n = 8            //
//_____________________________//
// 23. 74. 26. 12. 8. 45. 2 23.//
//_____________________________//
//  0   1   2  3   4   5  6  7 //
/////////////////////////////////














