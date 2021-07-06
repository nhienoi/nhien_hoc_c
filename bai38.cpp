#include <iostream>
using namespace std;
int main() {
    // viet chuong trinh lua chon
    int options;
    int a, b, sum, subtraction, mutiplication,division, dfremainder;
      cout << "vui lòng nhập a và b\n";
    cin >> a >> b;
    sum = a + b;
    subtraction = a - b;
    mutiplication = a * b;
    division = a / b;
    dfremainder = a % b;
    cout << "=====MENU=====" << "\n1.tổng" << "\n2.hiệu" << "\n3. tích" << "\n4.thương" << "\n5.chia lấy dư"<< "\n6.quay về menu\n";

    cin >> options;
    switch(options) {
        case 1: {
            cout << "tổng của a và b là: " << sum;
            break;
        }
        case 2: {
            cout << "hiệu của a và b là: " << subtraction;
            break;        
        }
        case 3: {
            cout << "tích của a và b là: " << mutiplication;
            break;
        }
        case 4: {
            cout << "thương của a và b là: " << division;
            break; 
        }
        case 5: {
            cout << "chia lấy dư của a và b là: " << dfremainder;
            break;
        }
        case 6: {
        cout << "=====MENU=====" << "\n1.tổng" << "\n2.hiệu" << "\n3. tích" << "\n4.thương" << "\n5.chia lấy dư"<< "\n6.quay về menu\n";
            break;

        }
        default: {
            cout << "lụa chọn sai";
            break;
        }
    }
    return 0;
}