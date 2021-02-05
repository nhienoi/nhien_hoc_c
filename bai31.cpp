// Viết chương trình nhập từ bàn phím 3 số nguyên. Sau đó hiển thị lên màn hình số lớn nhất trong 3 số này.

// Nếu bạn nhập:
#include <iostream>
using namespace std;
int main() {
    char a, b, c;
    cin >> a >> b >> c;
    if( a > b > c) {
        cout << " a la so lon nhat";
    } 
    else if( b > c) {
        cout << " b la so lon nhat";
    }
    else {
        cout << "c la so lon nhat";
    }
    return 0;
}