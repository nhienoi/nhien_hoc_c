#include <iostream>
using namespace std;

void type(int m[], int n);
void exprt(int m[], int n);
int Bsearch(int m[], int n, int x);

int main() {
    int n;
    cout << "nhap so n: ";
    cin >> n;
    int m[n];
    type(m,n);
    exprt(m,n);
    int x;
    cout << "nhap so can tim kiem: ";
    cin >> x;
    int a = Bsearch(m, n, x);
    if (a == -1) {
	cout << "ko tim thay";
    } else {
	cout << "tim thay o vi tri" << a;
	}
    return 0;
}

void type(int m[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "m[" << i << "] = :";
        cin >> m[i];
    }
}

void exprt(int m[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "m[" << i << "] = " << m[i] <<"\t";
    }
}

int Bsearch(int m[], int n, int x) {
    int left = 0;
    int right = n -1;
    int mid;
    do {
        mid = ((left + right)/ 2);
        if (m[mid] == x) {
            return mid;
        } else if (m[mid] > x) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    } while (left <= right);
	return -1;
}
 