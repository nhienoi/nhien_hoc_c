#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Viết chương trình làm tròn số thực nn nhập từ bàn phím về số nguyên gần nhất (chênh lệch giá trị nhỏ nhất).
    double n;
    cout <<"type a floating point number: ";
    cin >> n;
    cout << setprecision(1) << n;
    return 0;
}