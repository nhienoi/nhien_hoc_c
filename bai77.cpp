// Cho một mảng 2 chiều các số nguyên n hàng m cột arr được nhập từ bàn phím. 
// Bạn hãy viết chương trình tính tổng các phần tử trong mảng arr.

// Ví dụ nếu bạn nhập n = 2, m = 3, arr = [[5, 7, 3], [1, 2, 4]] như bên dưới:
#include <iostream>
using namespace std;
int main() {
    int n, m;
    cout << "nhap n: ";
    cin >> n;
    cout << "nhap m: ";
    cin >> m;
    int arr[n][m];
    cout << sizeof(arr);
    int sum;
    //arr[i]s[j]
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= m; j++) {
            cout << "arr["<< i << "]" << "[" << j << "] = : " ;
            cin >> arr[i][j];
        }
    }
       for(int i = 0; i < n; i++) {
        for(int j = 0; j <= m; j++) {
            sum += arr[i][j];
        }
        
    }
            cout << sum;

    return 0;
}