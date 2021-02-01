// nhập vào một số nguyên n, hãy cho biết số đó chăn hay lẻ âm hay dương,
//  in kết quả kiểm tra ra màn hình. Mỗi kl trên 1 dòng
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    if(n % 2 == 0) {
        cout << "n là số chẵn";
    }
    else {
        cout << "n là số lẻ";
    }
    return 0;
}