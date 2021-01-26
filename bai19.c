// ho 2 biến kiểu số nguyên a và b được nhập từ bàn phím, bạn hãy viết chương trình hiển thị ra màn hình:

// a mod b = {P}
#include <stdio.h>
int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("a mod b = %d", a % b);
    return 0;
}