#include <iostream>
using namespace std;
int main() {
	int n;
	int m;
	cout << "nhap n: ";
	cin >> n;
	cout << "nhap m: ";
	cin >> m;
	int arr[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 0; j++){
			cout << "arr[" << i << "]" << "[" << j << "] = ";
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "arr["<< i <<"]" << "[" << j << "] = ";
			cout << endl; 
		}
	}
	return 0;
}
