#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    cout << "do you want to fuck me ?";
    string strOk;
    cin >> strOk;
    if(strOk == "yes") {
        cout << "fuck";
    }
    int a;
    cin >> a;
    switch(a) {
        case 1: {
            cout << "fuck you";
            break;
        }
        case 2: {
            cout << "fuck you 2";
            break;
        }
        case 3: {
            cout << "fuck you 3";
            break;
        }
        case 4: {
            cout << "fuck you 4";
            break;
        }
        case 5: {
            cout << "fuck you 5";
            break;
        }
        default: {
            cout << "fuck you everywhere i want to fuck";
            break;
        }
    }
    return 0;
}