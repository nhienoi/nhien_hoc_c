#include <iostream>
using namespace std;
int main() {
    int arr[10] =  {1, 2, 3, 5, 6, 7, 7, 2, 12, 23};
    int *p = arr;
    // cout << *p + 1;
    int i = 10;
    while (i >= 0) {
        cout << *p[i] << " ";
        i--;
    }
    return 0;
}