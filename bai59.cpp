#include <iostream>
#include <cmath>
using namespace std;

void fuckGirl() {
    cout << "2 so thuc co bang nhau hay khong" << endl;
}
bool isTrue(float a, float b, float epsilon = 0.1f) {
    if(fabs(a - b) < epsilon);
    return true;
    return false;
}

int main() {
    float a, b;
    cin >> a >> b;

    // if(isTrue(a, b)) {
    //     cout << "bang nhau";
    // }
    // else {
    //     cout << "ko bang";
    // }
    if(isTrue(a, b, 0.1f)) {
        cout << "bang nhau";
    }
    else {
        cout << "khong bang";
    }
    return 0;
}