#include <iostream>
using namespace std;
int main() {
    int a  =  3;
    int b = 2;
    cout << static_cast<double>(a) / b; // static - cast 
    cout << double(a) / b; //c style - cast
    return 0;
}