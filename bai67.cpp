#include <iostream>
using namespace std;
bool x = true;
bool y = false;
bool isTrue(const int &a) {
    // if(a % 2 == 0) {
    //     return true;
    // }
    // else {
    //     return false;
    // }
    (a % 2 == 0) ? x : y;
}
int main() {
    int b;
    cin >> b;
    switch(isTrue(b)) {
        case true: {
            cout << "exactly true";
            break;
        }
        case false: {
            cout << "not true";
            break;
        }
        default: {
            cout << "fuck";
        }
    }
    return 0;
}
