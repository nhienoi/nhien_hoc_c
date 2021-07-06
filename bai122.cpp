#include <iostream>
using namespace std;
void enterArray(int arr[],int n);
void outputArray(int arr[],int n);
void findK(int arr[],int n, int k);
void sortArray(int arr[],int n);
int main() {
	int n;
	int k;
	cout << "nhap so phan tu n: \n";
	cin >> n;
	int arr[n];
	enterArray(arr,n);
	outputArray(arr,n);
	cout << "nhap k nao: ";
	cin >> k;
	findK(arr,n,k);
	sortArray(arr,n);
	return 0;
}
void enterArray(int arr[],int n){
	cout << "moi nhap mang: \n";
	for (int i = 0; i < n; i++) {
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
		cout << endl;
	}
}
void outputArray(int arr[],int n) {
	cout << "mang da nhap: ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	
}
void findK(int arr[],int n, int k) {
	bool ok;
	cout << "tim k trong mang \n";
	for (int i = 0; i < n; i++) {
		if (arr[i] == k) {
			ok = true;
		} else {
			ok = false;
		}
	}
	if(ok == true) {
		cout << "tim thay k trong mang \n";
	} else {
		cout << "khong tim thay";
	}
}
void sortArray(int arr[],int n) {
	cout << "sap xep mang \n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i] > arr[j]){
				int ok = arr[i];
				arr[i] = arr[j];
				arr[j] = ok;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << "mang sau khi dc sap xep la: \n";
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
}
