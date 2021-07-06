#include <iostream>
#include <cmath>
using namespace std;

bool isTrue(float a, float b, float epsilon = 0.01f) {
    
    if(fabs(a - b) < epsilon) {
        return true;
    }
    else {
        return false;
    }
}
int main() {
    float a, b;
    cout << "nhập số a: ";
    cin >> a;
    cout << "nhập số b: ";
    cin >> b;
    if(isTrue(a, b)) {
        cout << "a = b";
    }
    else {
        cout << "a khác b";
    }
    
    return 0;
}