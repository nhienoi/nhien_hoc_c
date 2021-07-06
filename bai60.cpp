#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void sayHello() {
    string yourName;
    getline(cin, yourName); 
    cout << "Hello: " << yourName;
}

int quadraticEquation2() {
    int a, b, c;
    float delta, x1, x2;
    cout << "quadaratic equation 2 ax^2 + bx + c" << endl;
    cout << "nhap a: ";
    cin >> a;
    cout << "nhap b: ";
    cin >> b;
    cout << "nhap c: ";
    cin >> c;
    delta = (b * b - 4 * a * c);
        if(delta > 0) {
            cout << "phương trình có 2 nghiệm phân biệt";
            x1 = ( b * b - sqrt(delta) ) / 2 * a;
            x2 = ( b * b + sqrt(delta) ) / 2 * a;
            cout << "giá trị cua x là: " << x1 << endl;
            cout << "giá trị của y là: " << x2 << endl; 
        }
        else if(delta = 0) {
            cout << "phương trình có 2 nghiệm kep" << endl;
            x1 = x2 = b* b / a * a * c;
            cout << x1;
        }
        else {
            cout << "phương trình vô nghiệm";
            
        }

        // ax ^ 2 + bx + c
        // 
    return 0;
}
int main() {
    double x1, x2;
    cout << "welcome to my world !"<< endl;
    cout << "what is your name ? ";
    sayHello();
    cout << "\nyou are a fucking man, you so fuck stupid";
    cout << "please tell me how to caculate quadratic equation 2 ? " << endl;
    quadraticEquation2();

    return 0;
}