#include <iostream>
using namespace std;
void type();
int simplify();
void xuat();
struct fraction{
	int nummerator;
	int denominator;	
};
void type (fraction &coordinate) {
	cout <<"please, type nummerator: ";
	cin >> 	coordinate.nummerator;
	cout <<"please, type denominator: ";
	cin >> coordinate.denominator;

	if (coordinate.denominator == 0) {
		cout << "you are wrong there is no fraction with numeraotr asign to 0";
	}
}
double simplify(fraction &a,int &x) {
	for (int i = 0; i <= a.nummerator; i++) {
		if (a.nummerator % i == 0 && a.denominator % i == 0) {
			if (x <= i) {
				x = i;
			} 
		}
	}
	return x;
}
void xuat(fraction a) {
	cout <<"phan so da toi gian la: " << a.nummerator << "/" << a.denominator;
}
int main() {
	int j;
	fraction A;
	type(A);
	//simplify(A, j);
	cout <<  A.nummerator << " " << A.denominator;
	return 0;
}
