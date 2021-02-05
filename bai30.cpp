// ạn hãy viết chương trình nhập vào từ bàn phím số nguyên n. Sau đó kiểm tra xem nếu n là số chẵn thì hiển thị ra:

// n is an even number
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Nhap n ?" << endl;
    cin >> n;
    if(n > 0) {

        if(n% 2 == 0) {
            cout << "N la so chan";
        }
        else {
            cout << "N la so le";
        }
    }
    else {
        cout << "n mang gia tri am";
    }
    return 0;
}