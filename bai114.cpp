#include <iostream>
#include <string>
using namespace std;

int random(int minN, int maxN){
    return minN + rand() % (maxN + 1 - minN);
}

int main() {
	int n; 
	int dem = 7;
	cout << "Moi Khanh Ly zu to nhap: ";
	cin >> n;
	int x = random(0, 100);
	if (n > x) {
		cout << "Ha Ha vua zu to vua thong minh";
	} else {
		cout << "Nhap sai roi, zu to nen bo qua";
		dem--;
		if (dem == 0) {
			cout << "Ly zu to thua roi";
			cout << "so may la: " << x;
		}
	}
	cout << "Ly zu to muon choi tiep k ?: ";
	string ok;
	cin >> ok;
	if(ok == "yes") {
		main();
	}  else {
		cout << "Khanh Ly zu to was fucked by Nhien";
	}
	return 0;
}
