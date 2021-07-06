#include <iostream>
using namespace std;

int fuck(int &x) {
    x = 10;
    cout <<"x là: "<<  x;
    return 0;
}
int main() {
    int a;
    a = 4;
    cout << a;
    cin >> a;
    fuck(a);
    cout << a;
    return 0;
}
