#include <iostream>
using namespace std;

int birthDay(int);
void hello();
void say();

int main() {
    say();
    return 0;
}
void say() {
    hello();
    birthDay(2003);     
}
int birthDay(int x) {
    cin >> x;
    cout <<  2021 - x;
    return 0;
}
void hello() {
    string name;
    getline(cin, name);
    cout << "Hello: " << name ;
}
