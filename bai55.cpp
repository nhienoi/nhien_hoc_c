#include <iostream>
int const a = 10;
void hello() {
    std::cout << "Hello, World !";
    std::cout << "global variable: " << a << std::endl;
    std::cout << "local variable: " << b << std::end;
}
// bien toan cuc va bien cuc bo
int main() {
    hello();
    return 0;
}