#include <iostream>
using namespace std;
int main() {
    const string fuck{"what?"};
    #define fuck_you "fuck";
    cout << fuck;
    cout << fuck_you;
    return 0;
}