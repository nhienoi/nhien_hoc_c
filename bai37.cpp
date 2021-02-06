#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    switch(a) {
        case 1: {
            cout << "hello world";
            break;
        }
        case 2: {
            cout << "Fuck you";
            break;
        }
        case 3: {
            cout << "con cac";
            break;
        }
        default: {
            cout << "may cha la gi ca";
        }
    }
    return 0;
}