#include <iostream>
//ep kieu ngam dinh

#include <iomanip>
using namespace std;
int main() {
    bool a = 123;
    char b = 10;
    double c = 50;
    cout << setprecision(20) << (a + b * c) << endl;
    cout << typeid(a + b * c).name() << (a + b * c);
    return 0;
} 