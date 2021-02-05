#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    switch(a) {
        case 1: {
            cout << "pham thi ngoc";
            break;
        }
        case 2: { 
            cout << "vu dinh liem";
            break;
        }
        case 3: {
            cout << "vu hong nhung";
            break;
        }
        case 4: {
            cout << "vu duy nhien";
            break;
        }
        case 5: { 
            cout << "vu thu ngan";
            break;
        }
        default: {
            cout << "that is not my family's member !!!";
        }
    }
    // switch (x) {
    //     case n: {

    //     }
    //     ....
    //     case y: {

    //     }
    //     default: {
    //         fuck
    //     }
    // }
    return 0;
}