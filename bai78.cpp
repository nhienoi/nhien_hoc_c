// Cho một mảng 2 chiều các số nguyên n hàng m cột arr được nhập từ bàn phím. 
//Bạn hãy viết chương trình tính tổng các phần tử chia hết cho 5 trong arr.

// Ví dụ nếu bạn nhập n = 3, m = 4, arr = [[10, 4, 8, 2], [5, 6, 4, 9], [20, 3, 8, 1]] như bên dưới:
#include <iostream>
using namespace std;
int main() {
    int n, m, sum;
    cin >> n >> m;
    int arr[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
        if(arr[i][j] % 5 == 0) {
            sum += arr[i][j];
        }
        }
    }
    cout << sum;
    return 0;
}