#include <iostream>
#include <iomanip>	// for std::setw(n), std::setfill(ch), std::left, std::right
using namespace std;
int main() {
    cout << setfill('*');
    cout << setw(70) <<"*"<<endl;
    cout << setfill(' ');
	cout << setw(15) << left << "thứ 2";
    cout << setw(15) << left << "thứ 3";
    cout << setw(15) << left << "thứ 4";
    cout << setw(15) << left << "thứ 5";
    cout << setw(15) << left << "thứ 6";
    cout << setw(15) << left << "thứ 7" << endl;
    cout << setfill('*');
    cout << setw(70)<< "*"<< endl;
    cout << setfill(' ');
    cout << setw(15) << left << "chao co";
    cout << setw(10) << left << "su";
    cout << setw(10) << left << "van";
    cout << setw(10) << left << "van";
    cout << setw(10) << left << "van";
    cout << setw(10) << left << "van";
	return 0;
}