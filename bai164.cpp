#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

void NhapSach(Book &b) {
	cout << "Nhap ten: ";
	gets(b.ISBN);
	gets(b.Ten);
	cout << "Nhap trang: ";
	cin >> b.page;
	cin.ignore();
	cout << "Nhap tac giac: ";
	gets(b.author);

}
void NhapDanhSach(Book dsach[], int n) {
	for (int i =; i < n; i++) {
		
	}
}
struct Book {
	char ISBN[20];
	char Ten[150];
	int page;
	char author[150];
};
int main(){
	
	return 0;
}
