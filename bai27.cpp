#include <iostream>
using namespace std;
int main() {
    cout << "Nhập n";
    int n;
    cin >> n;
    char t = [9];
    double total = 0;
    double avenger;
    for (int i = 0; i <= n; i++) {
        cin >> i;
        total += i;
    }
    avenger = total / 9;
    cout << "Nhiêt độ trung bình là:" << avenger;

    return 0;
}