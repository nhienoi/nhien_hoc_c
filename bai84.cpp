// Cho biến name kiểu string được nhập từ bàn phím, bạn hãy viết hàm hiển thị 
// ra màn hình thông tin sau:

// Hello {P}
#include <iostream>
using namespace std;
void show(string p) {
    cout << "Hello " << p;
}
int main() {
    string name;
    cin >> name;
    show(name);
    return 0;
}