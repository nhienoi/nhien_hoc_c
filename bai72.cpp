#include <iostream>
using namespace std;
int main() {
    int a = 10;
    bool b = 2;
    char c = 20;
    cout << typeof(static_cast<double>(a * b * c));
    return 0;  
}