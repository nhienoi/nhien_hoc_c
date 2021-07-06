#include <iostream>
using namespace std;

void sayFuck(string fuck) {
    cout << fuck;
}

int addNumber(int a, int b) {
    cout << a + b;
    return 0;
}
int main() {
    sayFuck("concac");
    cout << endl;
    addNumber(2, 3);
    return 0;
}