// Viết chương trình nhập từ bàn phím 3 số nguyên a, b, c. Sau đó hãy kiểm tra xem a, b, c có tạo thành một dãy số tăng dần hoặc giảm dần hay không.

// Nếu a ≤ b và b ≤ c thì chỉ hiển thị:
#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if(a <= b && b <=c || a >=b && b >= c) {
        cout << "increasing";
    }
    else {
        cout << "neither increasing nor decreasing ordere";
    }
    return 0;

}

// tang dan : a < b < c
//giam dan : a > b >c