#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "enter an interger: ";
    cin >> a;
    cout << "enter an another interger: ";
    cin >> b;
    if(a > b) {
        cout << "a > b"<< endl;
    }
    if(a >= b) {
        cout << "a >= b"<< endl;
    }
    if(a < b) {
        cout << " a < b"<< endl;
    }
    if(a <= b) {
        cout << "a <= b"<< endl;
    }
    if(a != b) {
        cout << "a khác b"<< endl;
    }
    if(a == b) {
        cout << "a = b"<< endl;
    }
    return 0;
}